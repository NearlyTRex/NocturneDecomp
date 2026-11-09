; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_004304e0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b83a6
;
; Called Functions:
;   core_actor.cpp_FUN_004096c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004304e0
        ;   Label: core_charactr.cpp_FUN_004304e0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004304e1
    PUSH EBX                            ; 004304e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004304e6
    PUSH EDX                            ; 004304ea
    CALL core_actor.cpp_FUN_004096c0    ; 004304eb
        ;   XREF to: 004096c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004096c0()
    ADD ESP,0x8                         ; 004304f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004304f3
    CMP dword ptr [EAX + 0x27a8],0x0    ; 004304f7
    JNZ 0x00430502                      ; 004304fe
        ;   XREF to: 00430502 (CONDITIONAL_JUMP)  ; LAB_00430502
    POP EBX                             ; 00430500
    RET                                 ; 00430501
    FLD float ptr [EBX + 0x44]          ; 00430502
        ;   Label: LAB_00430502
    MOV dword ptr [EBX + 0x50],0x0      ; 00430505
    FMUL double ptr [0x005b83a6]        ; 0043050c | DAT_005b83a6
    MOV dword ptr [EBX + 0x48],0x3f666666 ; 00430512
    FSTP float ptr [EBX + 0x4c]         ; 00430519
    POP EBX                             ; 0043051c
    RET                                 ; 0043051d

