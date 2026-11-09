; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00402710(int left_x,int right_x,int y,char *text)
;
; Parameters:
; int              Stack[0x4]:4   left_x
; int              Stack[0x8]:4   right_x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40 at 0045d059
;
; Called Functions:
;   engine_2d.c_FUN_004026d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402710
        ;   Label: engine_2d.c_FUN_00402710
    PUSH ESI                            ; 00402711
    MOV EDX,dword ptr [ESP + 0x14]      ; 00402712
    PUSH EDX                            ; 00402716
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402717
    PUSH ECX                            ; 0040271b
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040271c
    PUSH EBX                            ; 00402720
    MOV ESI,dword ptr [ESP + 0x24]      ; 00402721
    PUSH ESI                            ; 00402725
    CALL engine_2d.c_FUN_004026d0       ; 00402726
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_004026d0(char * text, int left_x, int right_x, int y)
    ADD ESP,0x10                        ; 0040272b
    POP ESI                             ; 0040272e
    POP EBX                             ; 0040272f
    RET                                 ; 00402730

