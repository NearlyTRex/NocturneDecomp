; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_game_cpp_checkCheatCode_FUN_004a0260(char *cheat_string)
;
; Parameters:
; char *           Stack[0x4]:4   cheat_string
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01c78af0
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0260
        ;   Label: core_game.cpp_checkCheatCode_FUN_004a0260
    PUSH ESI                            ; 004a0261
    PUSH EDI                            ; 004a0262
    PUSH EBP                            ; 004a0263
    SUB ESP,0x8                         ; 004a0264
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a0267
    MOV EDI,ESI                         ; 004a026b
    SUB ECX,ECX                         ; 004a026d
    DEC ECX                             ; 004a026f
    XOR EAX,EAX                         ; 004a0270
    SCASB.REPNE ES:EDI                  ; 004a0272
    NOT ECX                             ; 004a0274
    DEC ECX                             ; 004a0276
    XOR EBP,EBP                         ; 004a0277
    MOV dword ptr [ESP],ECX             ; 004a0279
    TEST ECX,ECX                        ; 004a027c
    JLE 0x004a02af                      ; 004a027e
        ;   XREF to: 004a02af (CONDITIONAL_JUMP)  ; LAB_004a02af
    MOV EAX,ECX                         ; 004a0280
    NEG EAX                             ; 004a0282
    MOV EBX,ECX                         ; 004a0284
    ADD ECX,EAX                         ; 004a0286
    MOV dword ptr [ESP + 0x4],ECX       ; 004a0288
    XOR EAX,EAX                         ; 004a028c
        ;   Label: LAB_004a028c
    MOV AL,byte ptr [ESI]               ; 004a028e
    PUSH EAX                            ; 004a0290
    MOVZX EDI,byte ptr [EBX + 0x1c78aef] ; 004a0291 | DAT_01c78af0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 004a0298
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_00565e20(int c)
    ADD ESP,0x4                         ; 004a029d
    CMP EDI,EAX                         ; 004a02a0
    JNZ 0x004a02a5                      ; 004a02a2
        ;   XREF to: 004a02a5 (CONDITIONAL_JUMP)  ; LAB_004a02a5
    INC EBP                             ; 004a02a4
    MOV EDX,dword ptr [ESP + 0x4]       ; 004a02a5
        ;   Label: LAB_004a02a5
    DEC EBX                             ; 004a02a9
    INC ESI                             ; 004a02aa
    CMP EBX,EDX                         ; 004a02ab
    JG 0x004a028c                       ; 004a02ad
        ;   XREF to: 004a028c (CONDITIONAL_JUMP)  ; LAB_004a028c
    CMP EBP,dword ptr [ESP]             ; 004a02af
        ;   Label: LAB_004a02af
    JNZ 0x004a02c9                      ; 004a02b2
        ;   XREF to: 004a02c9 (CONDITIONAL_JUMP)  ; LAB_004a02c9
    XOR AH,AH                           ; 004a02b4
    MOV byte ptr [0x01c78af0],AH        ; 004a02b6 | DAT_01c78af0
    MOV EAX,0x1                         ; 004a02bc
    ADD ESP,0x8                         ; 004a02c1
    POP EBP                             ; 004a02c4
    POP EDI                             ; 004a02c5
    POP ESI                             ; 004a02c6
    POP EBX                             ; 004a02c7
    RET                                 ; 004a02c8
    XOR EAX,EAX                         ; 004a02c9
        ;   Label: LAB_004a02c9
    ADD ESP,0x8                         ; 004a02cb
    POP EBP                             ; 004a02ce
    POP EDI                             ; 004a02cf
    POP ESI                             ; 004a02d0
    POP EBX                             ; 004a02d1
    RET                                 ; 004a02d2

