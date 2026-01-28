; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawString_FUN_00402080(char *text,int x_pos,int y_pos,int color)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x_pos
; int              Stack[0xc]:4   y_pos
; int              Stack[0x10]:4   color
;
; XREF[1]:
;   engine_console.cpp_CConsole_render_FUN_00441b00 at 00441b72
;
; Called Functions:
;   engine_2d.c_drawCharacter_FUN_00401a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402080
        ;   Label: engine_2d.c_drawString_FUN_00402080
    PUSH ESI                            ; 00402081
    PUSH EDI                            ; 00402082
    PUSH EBP                            ; 00402083
    MOV ESI,dword ptr [ESP + 0x14]      ; 00402084
    MOV EBP,dword ptr [ESP + 0x18]      ; 00402088
    MOV EDI,ESI                         ; 0040208c
    SUB ECX,ECX                         ; 0040208e
    DEC ECX                             ; 00402090
    XOR EAX,EAX                         ; 00402091
    SCASB.REPNE ES:EDI                  ; 00402093
    NOT ECX                             ; 00402095
    DEC ECX                             ; 00402097
    XOR EBX,EBX                         ; 00402098
    MOV EDI,ECX                         ; 0040209a
    TEST ECX,ECX                        ; 0040209c
    JLE 0x004020cc                      ; 0040209e
        ;   XREF to: 004020cc (CONDITIONAL_JUMP)  ; LAB_004020cc
    XOR EAX,EAX                         ; 004020a0
        ;   Label: LAB_004020a0
    MOV AL,byte ptr [ESI]               ; 004020a2
    CMP EAX,0x20                        ; 004020a4
    JL 0x004020c6                       ; 004020a7
        ;   XREF to: 004020c6 (CONDITIONAL_JUMP)  ; LAB_004020c6
    CMP EAX,0x100                       ; 004020a9
    JGE 0x004020c6                      ; 004020ae
        ;   XREF to: 004020c6 (CONDITIONAL_JUMP)  ; LAB_004020c6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004020b0
    PUSH EDX                            ; 004020b4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004020b5
    PUSH ECX                            ; 004020b9
    PUSH EBP                            ; 004020ba
    PUSH EAX                            ; 004020bb
    CALL engine_2d.c_drawCharacter_FUN_00401a10 ; 004020bc
        ;   XREF to: 00401a10 (UNCONDITIONAL_CALL)  ; int engine_2d.c_drawCharacter_FUN_00401a10(int char_code, int x_pos, int y_pos, int color)
    ADD ESP,0x10                        ; 004020c1
    ADD EBP,EAX                         ; 004020c4
    INC EBX                             ; 004020c6
        ;   Label: LAB_004020c6
    INC ESI                             ; 004020c7
    CMP EBX,EDI                         ; 004020c8
    JL 0x004020a0                       ; 004020ca
        ;   XREF to: 004020a0 (CONDITIONAL_JUMP)  ; LAB_004020a0
    POP EBP                             ; 004020cc
        ;   Label: LAB_004020cc
    POP EDI                             ; 004020cd
    POP ESI                             ; 004020ce
    POP EBX                             ; 004020cf
    RET                                 ; 004020d0

