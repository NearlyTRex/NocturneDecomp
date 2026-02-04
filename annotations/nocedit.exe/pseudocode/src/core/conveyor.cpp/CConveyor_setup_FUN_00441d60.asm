; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00441d60(CConveyor *this_ptr)
;
; Parameters:
; CConveyor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_platfrm.cpp_CPlatform_setup_FUN_0054ca20
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441d60
        ;   Label: core_conveyor.cpp_CConveyor_setup_FUN_00441d60
    PUSH ESI                            ; 00441d61
    PUSH EDI                            ; 00441d62
    SUB ESP,0x10                        ; 00441d63
    MOV EBX,dword ptr [ESP + 0x20]      ; 00441d66
    LEA EAX,[EBX + 0x328]               ; 00441d6a
    LEA EDX,[EBX + 0x20]                ; 00441d70
    MOV ECX,EAX                         ; 00441d73
    CMP EAX,EDX                         ; 00441d75
    JNZ 0x00441ddb                      ; 00441d77
        ;   XREF to: 00441ddb (CONDITIONAL_JUMP)  ; LAB_00441ddb
    LEA EAX,[EBX + 0x31c]               ; 00441d79
        ;   Label: LAB_00441d79
    CMP EAX,ECX                         ; 00441d7f
    JZ 0x00441d93                       ; 00441d81
        ;   XREF to: 00441d93 (CONDITIONAL_JUMP)  ; LAB_00441d93
    MOV EDX,dword ptr [ECX]             ; 00441d83
    MOV dword ptr [EAX],EDX             ; 00441d85
    MOV EDX,dword ptr [ECX + 0x4]       ; 00441d87
    MOV dword ptr [EAX + 0x4],EDX       ; 00441d8a
    MOV EDX,dword ptr [ECX + 0x8]       ; 00441d8d
    MOV dword ptr [EAX + 0x8],EDX       ; 00441d90
    LEA EAX,[EBX + 0x30]                ; 00441d93
        ;   Label: LAB_00441d93
    PUSH EAX                            ; 00441d96
    LEA ESI,[ESP + 0x4]                 ; 00441d97
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 00441d9b
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x4]                 ; 00441da0
    LEA EDI,[EBX + 0x344]               ; 00441da4
    ADD ESP,0x4                         ; 00441daa
    MOVSD ES:EDI,ESI                    ; 00441dad
    MOVSD ES:EDI,ESI                    ; 00441dae
    MOVSD ES:EDI,ESI                    ; 00441daf
    MOVSD ES:EDI,ESI                    ; 00441db0
    LEA EDI,[EBX + 0x334]               ; 00441db1
    LEA ESI,[EBX + 0x344]               ; 00441db7
    PUSH EBX                            ; 00441dbd
    MOVSD ES:EDI,ESI                    ; 00441dbe
    MOVSD ES:EDI,ESI                    ; 00441dbf
    MOVSD ES:EDI,ESI                    ; 00441dc0
    MOVSD ES:EDI,ESI                    ; 00441dc1
    CALL core_platfrm.cpp_CPlatform_setup_FUN_0054ca20 ; 00441dc2
        ;   XREF to: 0054ca20 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_setup_FUN_0054ca20(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 00441dc7
    MOV dword ptr [EBX + 0xfc],0x1      ; 00441dca
    ADD ESP,0x10                        ; 00441dd4
    POP EDI                             ; 00441dd7
    POP ESI                             ; 00441dd8
    POP EBX                             ; 00441dd9
    RET                                 ; 00441dda
    MOV ESI,dword ptr [EDX]             ; 00441ddb
        ;   Label: LAB_00441ddb
    MOV dword ptr [EAX],ESI             ; 00441ddd
    MOV ESI,dword ptr [EDX + 0x4]       ; 00441ddf
    MOV dword ptr [EAX + 0x4],ESI       ; 00441de2
    MOV ESI,dword ptr [EDX + 0x8]       ; 00441de5
    MOV dword ptr [EAX + 0x8],ESI       ; 00441de8
    JMP 0x00441d79                      ; 00441deb
        ;   XREF to: 00441d79 (UNCONDITIONAL_JUMP)  ; LAB_00441d79

