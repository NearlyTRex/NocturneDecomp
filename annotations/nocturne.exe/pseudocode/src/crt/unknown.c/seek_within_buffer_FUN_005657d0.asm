; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_seek_within_buffer_FUN_005657d0(int offset,_FILE *file)
;
; Parameters:
; int              Stack[0x4]:4   offset
; _FILE *          Stack[0x8]:4   file
;
; XREF[1]:
;   crt_stdio.c_fseek_FUN_0056582c at 00565902
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005657d0
        ;   Label: crt_unknown.c_seek_within_buffer_FUN_005657d0
    PUSH ESI                            ; 005657d1
    PUSH EDI                            ; 005657d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005657d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005657d7
    CMP EBX,dword ptr [EAX + 0x4]       ; 005657db
    JG 0x0056580b                       ; 005657de
        ;   XREF to: 0056580b (CONDITIONAL_JUMP)  ; LAB_0056580b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005657e0
    MOV ECX,dword ptr [EAX]             ; 005657e3
    MOV EDX,dword ptr [EDX + 0x8]       ; 005657e5
    SUB EDX,ECX                         ; 005657e8
    CMP EBX,EDX                         ; 005657ea
    JL 0x0056580b                       ; 005657ec
        ;   XREF to: 0056580b (CONDITIONAL_JUMP)  ; LAB_0056580b
    MOV DL,byte ptr [EAX + 0xc]         ; 005657ee
    MOV ESI,dword ptr [EAX]             ; 005657f1
    MOV EDI,dword ptr [EAX + 0x4]       ; 005657f3
    AND DL,0xef                         ; 005657f6
    ADD ESI,EBX                         ; 005657f9
    MOV byte ptr [EAX + 0xc],DL         ; 005657fb
    SUB EDI,EBX                         ; 005657fe
    MOV dword ptr [EAX],ESI             ; 00565800
    MOV dword ptr [EAX + 0x4],EDI       ; 00565802
    XOR EAX,EAX                         ; 00565805
    POP EDI                             ; 00565807
    POP ESI                             ; 00565808
    POP EBX                             ; 00565809
    RET                                 ; 0056580a
    MOV EAX,0x1                         ; 0056580b
        ;   Label: LAB_0056580b
    POP EDI                             ; 00565810
    POP ESI                             ; 00565811
    POP EBX                             ; 00565812
    RET                                 ; 00565813

