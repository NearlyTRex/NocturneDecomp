; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00474c90(undefined4 param_1)
;
;
; XREF[14]:
;   FUN_00470230 at 0047026f
;   FUN_00470310 at 0047034f
;   FUN_004703f0 at 00470430
;   FUN_00470730 at 004707dc
;   FUN_0049a1e0 at 0049a223
;   FUN_004a4b50 at 004a4f3b
;   FUN_004f8240 at 004f8423
;   FUN_004fde80 at 004fde85
;   FUN_0052ed40 at 0052ed4c
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049defd
;   ... and 4 more
;
; Referenced Globals:
;   undefined1* PTR_shape_edittool.cpp_CPickList_dtor_FUN_00474cf0_0059ca94 = 00474cf0
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450
;   shape_edittool.cpp_CStrList_ctor_FUN_00473b60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00474c90
        ;   Label: FUN_00474c90
    PUSH EAX                            ; 00474c94
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00473b60 ; 00474c95
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_ctor_FUN_00473b60()
    ADD ESP,0x4                         ; 00474c9a
    ADD EAX,0x138                       ; 00474c9d
    PUSH EAX                            ; 00474ca2
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450 ; 00474ca3
        ;   XREF to: 00476450 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450()
    MOV dword ptr [EAX + 0xfffffed4],0x59ca94 ; 00474ca8 | PTR_shape_edittool.cpp_CPickList_dtor_FUN_00474cf0_0059ca94
    MOV dword ptr [EAX + 0xfffffed8],0x0 ; 00474cb2
    MOV byte ptr [EAX + 0xfffffedc],0x0 ; 00474cbc
    MOV dword ptr [EAX + 0x34],0x0      ; 00474cc3
    MOV dword ptr [EAX + 0xffffff40],0x0 ; 00474cca
    MOV dword ptr [EAX + -0x8],0x0      ; 00474cd4
    ADD ESP,0x4                         ; 00474cdb
    MOV dword ptr [EAX + -0x4],0x0      ; 00474cde
    SUB EAX,0x138                       ; 00474ce5
    RET                                 ; 00474cea

