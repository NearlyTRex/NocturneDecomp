; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_fopenWithFlags_FUN_00601a20(char *filename,char *mode,int flags)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
; int              Stack[0xc]:4   flags
; Local Variables:
; int              Stack[-0x10]:4  local_10
;
; XREF[1]:
;   crt_stdio.c_fopen_FUN_00601a7c at 00601a89
;
; Called Functions:
;   crt_stdio.c___allocfp_FUN_006092f0
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
;   crt_stdio.c_OpenModeStringParser_FUN_006017d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601a20
        ;   Label: crt_stdio.c_fopenWithFlags_FUN_00601a20
    PUSH ESI                            ; 00601a21
    PUSH EDI                            ; 00601a22
    SUB ESP,0x4                         ; 00601a23
    MOV EAX,ESP                         ; 00601a26
    PUSH EAX                            ; 00601a28
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00601a29
    PUSH EDX                            ; 00601a2d
    CALL crt_stdio.c_OpenModeStringParser_FUN_006017d0 ; 00601a2e
        ;   XREF to: 006017d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_OpenModeStringParser_FUN_006017d0(char * mode_string, char * output_flags)
    MOV EBX,EAX                         ; 00601a33
    ADD ESP,0x8                         ; 00601a35
    TEST EAX,EAX                        ; 00601a38
    JZ 0x00601a72                       ; 00601a3a
        ;   XREF to: 00601a72 (CONDITIONAL_JUMP)  ; LAB_00601a72
    PUSH 0x0                            ; 00601a3c
    CALL crt_stdio.c___allocfp_FUN_006092f0 ; 00601a3e
        ;   XREF to: 006092f0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c___allocfp_FUN_006092f0(int unused_param)
    ADD ESP,0x4                         ; 00601a43
    MOV EDX,EAX                         ; 00601a46
    TEST EAX,EAX                        ; 00601a48
    JZ 0x00601a70                       ; 00601a4a
        ;   XREF to: 00601a70 (CONDITIONAL_JUMP)  ; LAB_00601a70
    PUSH EAX                            ; 00601a4c
    MOV ECX,dword ptr [ESP + 0x20]      ; 00601a4d
    PUSH ECX                            ; 00601a51
    MOV ESI,dword ptr [ESP + 0x8]       ; 00601a52
    PUSH ESI                            ; 00601a56
    MOV EDX,dword ptr [ESP + 0x24]      ; 00601a57
    XOR EAX,EAX                         ; 00601a5b
    PUSH EBX                            ; 00601a5d
    MOV AL,byte ptr [EDX]               ; 00601a5e
    PUSH EAX                            ; 00601a60
    MOV EDI,dword ptr [ESP + 0x28]      ; 00601a61
    PUSH EDI                            ; 00601a65
    CALL crt_stdio.c_OpenFileAndInitialize_FUN_0060190c ; 00601a66
        ;   XREF to: 0060190c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_OpenFileAndInitialize_FUN_0060190c(char * filename, char mode_char, int parsed_mode_flags, int stage1_result, ...)
    ADD ESP,0x18                        ; 00601a6b
    MOV EDX,EAX                         ; 00601a6e
    MOV EAX,EDX                         ; 00601a70
        ;   Label: LAB_00601a70
    ADD ESP,0x4                         ; 00601a72
        ;   Label: LAB_00601a72
    POP EDI                             ; 00601a75
    POP ESI                             ; 00601a76
    POP EBX                             ; 00601a77
    RET                                 ; 00601a78

