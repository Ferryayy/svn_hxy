#pragma once

//! ��϶�ٱ�edge��
struct EdgePair {

    //int id;//���к�ûɶ�ã���������
    TopoDS_Edge edge1;
    TopoDS_Edge edge2;
    Standard_Real myHausdorffDistances;

    EdgePair() {};
    EdgePair(const TopoDS_Edge& edge1, const TopoDS_Edge& edge2,
        Standard_Real& HausdorffDistances) :
        edge1(edge1), edge2(edge2), myHausdorffDistances(HausdorffDistances)
    {}
};