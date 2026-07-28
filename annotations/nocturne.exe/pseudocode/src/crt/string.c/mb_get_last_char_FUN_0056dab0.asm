; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_mb_get_last_char_FUN_0056dab0(char *start,char *end)
;
; Parameters:
; char *           Stack[0x4]:4   start
; char *           Stack[0x8]:4   end
;
; XREF[1]:
;   crt_file.c_makepath_FUN_0056626c at 00566353
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dab0
        ;   Label: crt_string.c_mb_get_last_char_FUN_0056dab0
    PUSH ESI                            ; 0056dab1
    PUSH EDI                            ; 0056dab2
    MOV ESI,dword ptr [0x02de5c30]      ; 0056dab3 | DAT_02de5c30
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056dab9
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056dabd
    CMP EBX,EDI                         ; 0056dac1
    JC 0x0056dac9                       ; 0056dac3
        ;   XREF to: 0056dac9 (CONDITIONAL_JUMP)  ; LAB_0056dac9
    XOR EDX,EDX                         ; 0056dac5
    JMP 0x0056db27                      ; 0056dac7
        ;   XREF to: 0056db27 (UNCONDITIONAL_JUMP)  ; LAB_0056db27
    LEA EAX,[EDI + -0x1]                ; 0056dac9
        ;   Label: LAB_0056dac9
    TEST ESI,ESI                        ; 0056dacc
    JZ 0x0056daf4                       ; 0056dace
        ;   XREF to: 0056daf4 (CONDITIONAL_JUMP)  ; LAB_0056daf4
    XOR EDX,EDX                         ; 0056dad0
    MOV DL,byte ptr [EAX]               ; 0056dad2
    MOV DL,byte ptr [EDX + 0x2de5c41]   ; 0056dad4
    AND DL,0x1                          ; 0056dada
    AND EDX,0xff                        ; 0056dadd
    JZ 0x0056daf4                       ; 0056dae3
        ;   XREF to: 0056daf4 (CONDITIONAL_JUMP)  ; LAB_0056daf4
    LEA EDX,[EAX + -0x1]                ; 0056dae5
    MOV EAX,EDX                         ; 0056dae8
    MOV dword ptr [0x02de5c30],ESI      ; 0056daea | DAT_02de5c30
    POP EDI                             ; 0056daf0
    POP ESI                             ; 0056daf1
    POP EBX                             ; 0056daf2
    RET                                 ; 0056daf3
    DEC EAX                             ; 0056daf4
        ;   Label: LAB_0056daf4
    CMP EBX,EAX                         ; 0056daf5
    JA 0x0056db12                       ; 0056daf7
        ;   XREF to: 0056db12 (CONDITIONAL_JUMP)  ; LAB_0056db12
    TEST ESI,ESI                        ; 0056daf9
    JZ 0x0056db12                       ; 0056dafb
        ;   XREF to: 0056db12 (CONDITIONAL_JUMP)  ; LAB_0056db12
    XOR EDX,EDX                         ; 0056dafd
    MOV DL,byte ptr [EAX]               ; 0056daff
    MOV DL,byte ptr [EDX + 0x2de5c41]   ; 0056db01
    AND DL,0x1                          ; 0056db07
    AND EDX,0xff                        ; 0056db0a
    JNZ 0x0056daf4                      ; 0056db10
        ;   XREF to: 0056daf4 (CONDITIONAL_JUMP)  ; LAB_0056daf4
    MOV EDX,EDI                         ; 0056db12
        ;   Label: LAB_0056db12
    SUB EDX,EAX                         ; 0056db14
    MOV EBX,0x2                         ; 0056db16
    MOV EAX,EDX                         ; 0056db1b
    SAR EDX,0x1f                        ; 0056db1d
    IDIV EBX                            ; 0056db20
    DEC EDI                             ; 0056db22
    SUB EDI,EDX                         ; 0056db23
    MOV EDX,EDI                         ; 0056db25
    MOV EAX,EDX                         ; 0056db27
        ;   Label: LAB_0056db27
    MOV dword ptr [0x02de5c30],ESI      ; 0056db29 | DAT_02de5c30
    POP EDI                             ; 0056db2f
    POP ESI                             ; 0056db30
    POP EBX                             ; 0056db31
    RET                                 ; 0056db32

