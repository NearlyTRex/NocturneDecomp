; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_game.cpp_FUN_004dd7f0()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1 DAT_02d831d6
;   char[20] g_InputHistory
;   undefined4 CHAR_ARRAY_02d831d8
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd7f0
        ;   Label: core_game.cpp_FUN_004dd7f0
    PUSH ESI                            ; 004dd7f1
    PUSH EDI                            ; 004dd7f2
    PUSH EBP                            ; 004dd7f3
    SUB ESP,0x8                         ; 004dd7f4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004dd7f7
    MOV EDI,ESI                         ; 004dd7fb
    SUB ECX,ECX                         ; 004dd7fd
    DEC ECX                             ; 004dd7ff
    XOR EAX,EAX                         ; 004dd800
    SCASB.REPNE ES:EDI                  ; 004dd802
    NOT ECX                             ; 004dd804
    DEC ECX                             ; 004dd806
    XOR EBP,EBP                         ; 004dd807
    MOV dword ptr [ESP],ECX             ; 004dd809
    TEST ECX,ECX                        ; 004dd80c
    JLE 0x004dd83f                      ; 004dd80e | LAB_004dd83f
        ;   XREF to: 004dd83f (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 004dd810
    NEG EAX                             ; 004dd812
    MOV EBX,ECX                         ; 004dd814
    ADD ECX,EAX                         ; 004dd816
    MOV dword ptr [ESP + 0x4],ECX       ; 004dd818
    XOR EAX,EAX                         ; 004dd81c
        ;   Label: LAB_004dd81c
    MOV AL,byte ptr [ESI]               ; 004dd81e
    PUSH EAX                            ; 004dd820
    MOVZX EDI,byte ptr [EBX + 0x2d831d7] ; 004dd821 | char[20] g_InputHistory | DAT_02d831d6
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004dd828 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004dd82d
    CMP EDI,EAX                         ; 004dd830
    JNZ 0x004dd835                      ; 004dd832 | LAB_004dd835
        ;   XREF to: 004dd835 (CONDITIONAL_JUMP)
    INC EBP                             ; 004dd834
    MOV EDX,dword ptr [ESP + 0x4]       ; 004dd835
        ;   Label: LAB_004dd835
    DEC EBX                             ; 004dd839
    INC ESI                             ; 004dd83a
    CMP EBX,EDX                         ; 004dd83b
    JG 0x004dd81c                       ; 004dd83d | LAB_004dd81c
        ;   XREF to: 004dd81c (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [ESP]             ; 004dd83f
        ;   Label: LAB_004dd83f
    JNZ 0x004dd859                      ; 004dd842 | LAB_004dd859
        ;   XREF to: 004dd859 (CONDITIONAL_JUMP)
    XOR AH,AH                           ; 004dd844
    MOV byte ptr [0x02d831d8],AH        ; 004dd846 | CHAR_ARRAY_02d831d8
    MOV EAX,0x1                         ; 004dd84c
    ADD ESP,0x8                         ; 004dd851
    POP EBP                             ; 004dd854
    POP EDI                             ; 004dd855
    POP ESI                             ; 004dd856
    POP EBX                             ; 004dd857
    RET                                 ; 004dd858
    XOR EAX,EAX                         ; 004dd859
        ;   Label: LAB_004dd859
    ADD ESP,0x8                         ; 004dd85b
    POP EBP                             ; 004dd85e
    POP EDI                             ; 004dd85f
    POP ESI                             ; 004dd860
    POP EBX                             ; 004dd861
    RET                                 ; 004dd862

