; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_string.c_strchr_FUN_0060f890(char * str, int ch)
;
; Parameters:
; char *           Stack[0x4]:4   str
; int              Stack[0x8]:4   ch
;
; XREF[1]:
;   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 at 0060e76d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060f890
        ;   Label: crt_string.c_strchr_FUN_0060f890
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060f891
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060f895
    MOV BL,DL                           ; 0060f899
    CMP DL,byte ptr [EAX]               ; 0060f89b
    JZ 0x0060f8b0                       ; 0060f89d
        ;   XREF to: 0060f8b0 (CONDITIONAL_JUMP)  ; LAB_0060f8b0
    MOV EDX,EAX                         ; 0060f89f
        ;   Label: LAB_0060f89f
    MOV CL,byte ptr [EDX]               ; 0060f8a1
    INC EAX                             ; 0060f8a3
    TEST CL,CL                          ; 0060f8a4
    JZ 0x0060f8ae                       ; 0060f8a6
        ;   XREF to: 0060f8ae (CONDITIONAL_JUMP)  ; LAB_0060f8ae
    CMP BL,byte ptr [EAX]               ; 0060f8a8
    JZ 0x0060f8b0                       ; 0060f8aa
        ;   XREF to: 0060f8b0 (CONDITIONAL_JUMP)  ; LAB_0060f8b0
    JMP 0x0060f89f                      ; 0060f8ac
        ;   XREF to: 0060f89f (UNCONDITIONAL_JUMP)  ; LAB_0060f89f
    XOR EAX,EAX                         ; 0060f8ae
        ;   Label: LAB_0060f8ae
    POP EBX                             ; 0060f8b0
        ;   Label: LAB_0060f8b0
    RET                                 ; 0060f8b1

