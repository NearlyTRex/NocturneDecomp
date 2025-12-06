; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextWrappedColor_FUN_00401eb0(char * text, int x_start, int y_start, int x_max, int y_max, int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   y_start
; int              Stack[0x10]:4   x_max
; int              Stack[0x14]:4   y_max
; int              Stack[0x18]:4   color
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_drawTextColor_FUN_00402430 at 00402461
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401eb0
        ;   Label: engine_2d.c_drawTextWrappedColor_FUN_00401eb0
    PUSH ESI                            ; 00401eb1
    PUSH EDI                            ; 00401eb2
    PUSH EBP                            ; 00401eb3
    SUB ESP,0x4                         ; 00401eb4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401eb7
    MOV EBX,dword ptr [ESP + 0x20]      ; 00401ebb
    MOV EDI,EDX                         ; 00401ebf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401ec1
    SUB ECX,ECX                         ; 00401ec5
    DEC ECX                             ; 00401ec7
    XOR EAX,EAX                         ; 00401ec8
    SCASB.REPNE ES:EDI                  ; 00401eca
    NOT ECX                             ; 00401ecc
    DEC ECX                             ; 00401ece
    XOR EBP,EBP                         ; 00401ecf
    MOV dword ptr [ESP],ECX             ; 00401ed1
    TEST ECX,ECX                        ; 00401ed4
    JLE 0x00401f2e                      ; 00401ed6 | LAB_00401f2e
        ;   XREF to: 00401f2e (CONDITIONAL_JUMP)
    MOV EDI,EDX                         ; 00401ed8
    CMP byte ptr [EDI],0xa              ; 00401eda
        ;   Label: LAB_00401eda
    JNZ 0x00401eee                      ; 00401edd | LAB_00401eee
        ;   XREF to: 00401eee (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401edf
    ADD EBX,0xb                         ; 00401ee3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401ee6
    CMP EBX,ECX                         ; 00401eea
    JG 0x00401f2e                       ; 00401eec | LAB_00401f2e
        ;   XREF to: 00401f2e (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00401eee
        ;   Label: LAB_00401eee
    MOV AL,byte ptr [EDI]               ; 00401ef0
    CMP EAX,0x20                        ; 00401ef2
    JL 0x00401f25                       ; 00401ef5 | LAB_00401f25
        ;   XREF to: 00401f25 (CONDITIONAL_JUMP)
    CMP EAX,0x100                       ; 00401ef7
    JGE 0x00401f25                      ; 00401efc | LAB_00401f25
        ;   XREF to: 00401f25 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00401efe
    PUSH EDX                            ; 00401f02
    PUSH EBX                            ; 00401f03
    PUSH ESI                            ; 00401f04
    PUSH EAX                            ; 00401f05
    CALL engine_2d.c_drawCharacter_FUN_00401a10 ; 00401f06 | int engine_2d.c_drawCharacter_FUN_00401a10(int char_code, int x_pos, int y_pos, int color)
        ;   XREF to: 00401a10 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00401f0b
    ADD ESI,EAX                         ; 00401f0e
    CMP ESI,dword ptr [ESP + 0x24]      ; 00401f10
    JLE 0x00401f25                      ; 00401f14 | LAB_00401f25
        ;   XREF to: 00401f25 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x28]      ; 00401f16
    ADD EBX,0xb                         ; 00401f1a
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401f1d
    CMP EBX,EAX                         ; 00401f21
    JG 0x00401f2e                       ; 00401f23 | LAB_00401f2e
        ;   XREF to: 00401f2e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP]             ; 00401f25
        ;   Label: LAB_00401f25
    INC EBP                             ; 00401f28
    INC EDI                             ; 00401f29
    CMP EBP,EDX                         ; 00401f2a
    JL 0x00401eda                       ; 00401f2c | LAB_00401eda
        ;   XREF to: 00401eda (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 00401f2e
        ;   Label: LAB_00401f2e
    POP EBP                             ; 00401f31
    POP EDI                             ; 00401f32
    POP ESI                             ; 00401f33
    POP EBX                             ; 00401f34
    RET                                 ; 00401f35

