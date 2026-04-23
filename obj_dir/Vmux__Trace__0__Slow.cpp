// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmux__Syms.h"


VL_ATTR_COLD void Vmux___024root__trace_init_sub__TOP__0(Vmux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_init_sub__TOP__0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux___024root__trace_init_top(Vmux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_init_top\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux___024root__trace_register(Vmux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_register\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmux___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vmux___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vmux___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vmux___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_const_0\n"); );
    // Body
    Vmux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmux___024root__trace_full_0_sub_0(Vmux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_full_0\n"); );
    // Body
    Vmux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmux___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux___024root__trace_full_0_sub_0(Vmux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root__trace_full_0_sub_0\n"); );
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb__DOT__a));
    bufp->fullBit(oldp+1,(vlSelfRef.tb__DOT__b));
    bufp->fullBit(oldp+2,(vlSelfRef.tb__DOT__sel));
    bufp->fullBit(oldp+3,(((IData)(vlSelfRef.tb__DOT__sel)
                            ? (IData)(vlSelfRef.tb__DOT__b)
                            : (IData)(vlSelfRef.tb__DOT__a))));
}
