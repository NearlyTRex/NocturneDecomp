; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_FUN_00531ae0(CNPC *this_ptr,int layer_flag)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[1]:
;   core_hostage.cpp_FUN_004eefd0 at 004ef015
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f320
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531ae0
        ;   Label: core_npc.cpp_FUN_00531ae0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00531ae4
    CMP dword ptr [EAX + 0x1fab0],0x0   ; 00531ae8
    JZ 0x00531b09                       ; 00531aef
        ;   XREF to: 00531b09 (CONDITIONAL_JUMP)  ; LAB_00531b09
    TEST EDX,EDX                        ; 00531af1
    JZ 0x00531aff                       ; 00531af3
        ;   XREF to: 00531aff (CONDITIONAL_JUMP)  ; LAB_00531aff
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00531af5
    PUSH EDX                            ; 00531aff
        ;   Label: LAB_00531aff
    PUSH EAX                            ; 00531b00
    CALL core_charactr.cpp_FUN_0042f320 ; 00531b01
        ;   XREF to: 0042f320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f320()
    ADD ESP,0x8                         ; 00531b06
    RET                                 ; 00531b09
        ;   Label: LAB_00531b09

