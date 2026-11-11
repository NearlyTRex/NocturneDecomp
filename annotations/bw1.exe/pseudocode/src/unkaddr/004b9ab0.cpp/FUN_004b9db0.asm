; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004b9ab0_cpp_FUN_004b9db0(char *param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc4470
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9db0
        ;   Label: unkaddr_004b9ab0.cpp_FUN_004b9db0
    PUSH ESI                            ; 004b9db1
    PUSH EDI                            ; 004b9db2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b9db3
    MOV EDX,dword ptr [0x01cc4470]      ; 004b9db7 | DAT_01cc4470
    XOR EBX,EBX                         ; 004b9dbd
    TEST EDX,EDX                        ; 004b9dbf
    JLE 0x004b9df9                      ; 004b9dc1
        ;   XREF to: 004b9df9 (CONDITIONAL_JUMP)  ; LAB_004b9df9
    MOV ESI,0x1cc4474                   ; 004b9dc3
    PUSH EDI                            ; 004b9dc8
        ;   Label: LAB_004b9dc8
    PUSH ESI                            ; 004b9dc9
    CALL core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0 ; 004b9dca
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined4 core_fldnotes.cpp_SNotesSection_findEntry_FUN_004bbfd0(SNotesSection * this_ptr, char * param_2)
    ADD ESP,0x8                         ; 004b9dcf
    MOV EDX,EAX                         ; 004b9dd2
    TEST EAX,EAX                        ; 004b9dd4
    JZ 0x004b9de8                       ; 004b9dd6
        ;   XREF to: 004b9de8 (CONDITIONAL_JUMP)  ; LAB_004b9de8
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b9dd8
    TEST ESI,ESI                        ; 004b9ddc
    JZ 0x004b9de2                       ; 004b9dde
        ;   XREF to: 004b9de2 (CONDITIONAL_JUMP)  ; LAB_004b9de2
    MOV dword ptr [ESI],EBX             ; 004b9de0
    MOV EAX,EDX                         ; 004b9de2
        ;   Label: LAB_004b9de2
    POP EDI                             ; 004b9de4
    POP ESI                             ; 004b9de5
    POP EBX                             ; 004b9de6
    RET                                 ; 004b9de7
    MOV ECX,dword ptr [0x01cc4470]      ; 004b9de8 | DAT_01cc4470
        ;   Label: LAB_004b9de8
    INC EBX                             ; 004b9dee
    ADD ESI,0x2e4                       ; 004b9def
    CMP EBX,ECX                         ; 004b9df5
    JL 0x004b9dc8                       ; 004b9df7
        ;   XREF to: 004b9dc8 (CONDITIONAL_JUMP)  ; LAB_004b9dc8
    XOR EAX,EAX                         ; 004b9df9
        ;   Label: LAB_004b9df9
    POP EDI                             ; 004b9dfb
    POP ESI                             ; 004b9dfc
    POP EBX                             ; 004b9dfd
    RET                                 ; 004b9dfe

