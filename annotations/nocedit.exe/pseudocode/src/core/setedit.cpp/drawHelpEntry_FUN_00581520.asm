; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_drawHelpEntry_FUN_00581520(int column,int row,char *key_label,char *description)
;
; Parameters:
; int              Stack[0x4]:4   column
; int              Stack[0x8]:4   row
; char *           Stack[0xc]:4   key_label
; char *           Stack[0x10]:4   description
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581520
        ;   Label: core_setedit.cpp_drawHelpEntry_FUN_00581520
    PUSH ESI                            ; 00581521
    PUSH EDI                            ; 00581522
    PUSH EBP                            ; 00581523
    MOV EDX,dword ptr [ESP + 0x18]      ; 00581524
    LEA ESI,[EDX*0x4 + 0x0]             ; 00581528
    SUB ESI,EDX                         ; 0058152f
    SHL ESI,0x2                         ; 00581531
    MOV ECX,dword ptr [0x00679394]      ; 00581534 | g_WindowWidth
    SUB ESI,EDX                         ; 0058153a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0058153c
    IMUL EDX,ECX                        ; 00581540
    MOV EAX,EDX                         ; 00581543
    SAR EDX,0x1f                        ; 00581545
    SUB EAX,EDX                         ; 00581548
    SAR EAX,0x1                         ; 0058154a
    PUSH ESI                            ; 0058154c
    PUSH EAX                            ; 0058154d
    MOV EDI,dword ptr [ESP + 0x24]      ; 0058154e
    PUSH EDI                            ; 00581552
    MOV EBX,EAX                         ; 00581553
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581555
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0058155a
    MOV EAX,[0x00679394]                ; 0058155d | g_WindowWidth
    PUSH ESI                            ; 00581562
    MOV EDX,EAX                         ; 00581563
    MOV ESI,0xa                         ; 00581565
    SAR EDX,0x1f                        ; 0058156a
    IDIV ESI                            ; 0058156d
    ADD EAX,EBX                         ; 0058156f
    PUSH EAX                            ; 00581571
    MOV EBP,dword ptr [ESP + 0x28]      ; 00581572
    PUSH EBP                            ; 00581576
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581577
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0058157c
    POP EBP                             ; 0058157f
    POP EDI                             ; 00581580
    POP ESI                             ; 00581581
    POP EBX                             ; 00581582
    RET                                 ; 00581583

