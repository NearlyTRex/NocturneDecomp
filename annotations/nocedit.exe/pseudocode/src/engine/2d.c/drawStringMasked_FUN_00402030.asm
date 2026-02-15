; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawStringMasked_FUN_00402030(char *text,int x_pos,int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
;
; Called Functions:
;   engine_2d.c_drawCharacterMasked_FUN_00401900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402030
        ;   Label: engine_2d.c_drawStringMasked_FUN_00402030
    PUSH ESI                            ; 00402031
    PUSH EDI                            ; 00402032
    PUSH EBP                            ; 00402033
    MOV ESI,dword ptr [ESP + 0x14]      ; 00402034
    MOV EBP,dword ptr [ESP + 0x18]      ; 00402038
    MOV EDI,ESI                         ; 0040203c
    SUB ECX,ECX                         ; 0040203e
    DEC ECX                             ; 00402040
    XOR EAX,EAX                         ; 00402041
    SCASB.REPNE ES:EDI                  ; 00402043
    NOT ECX                             ; 00402045
    DEC ECX                             ; 00402047
    XOR EBX,EBX                         ; 00402048
    MOV EDI,ECX                         ; 0040204a
    TEST ECX,ECX                        ; 0040204c
    JLE 0x00402077                      ; 0040204e
        ;   XREF to: 00402077 (CONDITIONAL_JUMP)  ; LAB_00402077
    XOR EAX,EAX                         ; 00402050
        ;   Label: LAB_00402050
    MOV AL,byte ptr [ESI]               ; 00402052
    CMP EAX,0x20                        ; 00402054
    JL 0x00402071                       ; 00402057
        ;   XREF to: 00402071 (CONDITIONAL_JUMP)  ; LAB_00402071
    CMP EAX,0x100                       ; 00402059
    JGE 0x00402071                      ; 0040205e
        ;   XREF to: 00402071 (CONDITIONAL_JUMP)  ; LAB_00402071
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00402060
    PUSH EDX                            ; 00402064
    PUSH EBP                            ; 00402065
    PUSH EAX                            ; 00402066
    CALL engine_2d.c_drawCharacterMasked_FUN_00401900 ; 00402067
        ;   XREF to: 00401900 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacterMasked_FUN_00401900(int char_code, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0040206c
    ADD EBP,EAX                         ; 0040206f
    INC EBX                             ; 00402071
        ;   Label: LAB_00402071
    INC ESI                             ; 00402072
    CMP EBX,EDI                         ; 00402073
    JL 0x00402050                       ; 00402075
        ;   XREF to: 00402050 (CONDITIONAL_JUMP)  ; LAB_00402050
    POP EBP                             ; 00402077
        ;   Label: LAB_00402077
    POP EDI                             ; 00402078
    POP ESI                             ; 00402079
    POP EBX                             ; 0040207a
    RET                                 ; 0040207b

