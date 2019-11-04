#define PI 3.14159265

/*Dados sobre triâgulo retângulo*/
class trianguloRetangulo {
    private:
        double catetoAdj, catetoOpo, hipotenusa, angulo; //Catetos, hipotenusa e ângulo
    public:
        trianguloRet() { catetoAdj = catetoOpo = hipotenusa = angulo = 0; }
        void setCatetos(double adjacente, double oposto) {
            catetoAdj = adjacente;
            catetoOpo = oposto;
            hipotenusa = sqrt(pow(catetoAdj, 2) + pow(catetoOpo, 2));
            angulo = acos(catetoAdj / hipotenusa) * 180.0 / PI;
        }
        void setCatetoAdjAngulo(double adjacente, double ang) {
            catetoAdj = adjacente;
            angulo = ang;
            hipotenusa = catetoAdj / cos(angulo * PI / 180.0 );
            catetoOpo = sqrt(pow(hipotenusa, 2) - pow(catetoAdj, 2));
        }
        void setCatetoOpoAngulo(double oposto, double ang) {
            catetoOpo = oposto;
            angulo = ang;
            hipotenusa = catetoOpo / sin(angulo * PI / 180.0 );
            catetoAdj = sqrt(pow(hipotenusa, 2) - pow(catetoOpo, 2));
        }
        void setHipotenusaAngulo(double hip, double ang) { //em relação ao catetoAdjt. adj.
            hipotenusa = hip;
            angulo = ang;
            catetoAdj = hipotenusa * cos(angulo * PI / 180.0 );
            catetoOpo = sqrt(pow(hipotenusa, 2) - pow(catetoAdj, 2));
        }
        double getCatetoAdj() { return catetoAdj; }
        double getCatetoOpo() { return catetoOpo; }
        double getHipotenusa() { return hipotenusa; }
        double getAngulo() { return angulo; }
};
