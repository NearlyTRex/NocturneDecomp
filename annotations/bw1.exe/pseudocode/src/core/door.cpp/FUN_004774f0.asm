; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_004774f0(int param_1,int param_2)
;
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a547f
;
; Called Functions:
;   core_door.cpp_FUN_00477540
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004774f0
        ;   Label: core_door.cpp_FUN_004774f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004774f4
    MOV dword ptr [EAX + 0x2e0],EDX     ; 004774f8
    TEST EDX,EDX                        ; 004774fe
    JZ 0x00477521                       ; 00477500
        ;   XREF to: 00477521 (CONDITIONAL_JUMP)  ; LAB_00477521
    CMP dword ptr [EAX + 0x2e0],0x2     ; 00477502
        ;   Label: LAB_00477502
    JNZ 0x00477517                      ; 00477509
        ;   XREF to: 00477517 (CONDITIONAL_JUMP)  ; LAB_00477517
    MOV EDX,dword ptr [EAX + 0x9b0]     ; 0047750b
    MOV dword ptr [EAX + 0x9ac],EDX     ; 00477511
    PUSH EAX                            ; 00477517
        ;   Label: LAB_00477517
    CALL core_door.cpp_FUN_00477540     ; 00477518
        ;   XREF to: 00477540 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00477540()
    ADD ESP,0x4                         ; 0047751d
    RET                                 ; 00477520
    MOV dword ptr [EAX + 0x9ac],EDX     ; 00477521
        ;   Label: LAB_00477521
    JMP 0x00477502                      ; 00477527
        ;   XREF to: 00477502 (UNCONDITIONAL_JUMP)  ; LAB_00477502

