; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00402600(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00469b40 at 00469d4c
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402440
;   engine_2d.c_getStringWidth_FUN_004018b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402600
        ;   Label: engine_2d.c_FUN_00402600
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402601
    PUSH EDX                            ; 00402605
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402606
    PUSH ECX                            ; 0040260a
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 0040260b
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    LEA EDX,[EAX + -0x1]                ; 00402610
    MOV EAX,EDX                         ; 00402613
    SAR EDX,0x1f                        ; 00402615
    SUB EAX,EDX                         ; 00402618
    SAR EAX,0x1                         ; 0040261a
    ADD ESP,0x4                         ; 0040261c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040261f
    SUB EDX,EAX                         ; 00402623
    PUSH EDX                            ; 00402625
    MOV EBX,dword ptr [ESP + 0x10]      ; 00402626
    PUSH EBX                            ; 0040262a
    CALL engine_2d.c_drawTextColor_FUN_00402440 ; 0040262b
        ;   XREF to: 00402440 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402440(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402630
    POP EBX                             ; 00402633
    RET                                 ; 00402634

