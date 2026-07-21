; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e070
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
    PUSH ESI                            ; 0045e071
    PUSH EDI                            ; 0045e072
    PUSH EBP                            ; 0045e073
    SUB ESP,0x1004                      ; 0045e074
    LEA EAX,[ESP + 0x1030]              ; 0045e07a
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045e081
    LEA EAX,[ESP + 0x1000]              ; 0045e088
    PUSH EAX                            ; 0045e08f
    MOV EDX,dword ptr [ESP + 0x1030]    ; 0045e090
    PUSH EDX                            ; 0045e097
    LEA EAX,[ESP + 0x8]                 ; 0045e098
    PUSH EAX                            ; 0045e09c
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045e09d
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045e0a2
    MOV EBX,dword ptr [ESP + 0x1028]    ; 0045e0a5
    PUSH EBX                            ; 0045e0ac
    MOV ESI,dword ptr [ESP + 0x1028]    ; 0045e0ad
    PUSH ESI                            ; 0045e0b4
    MOV EDI,dword ptr [ESP + 0x1028]    ; 0045e0b5
    PUSH EDI                            ; 0045e0bc
    MOV EBP,dword ptr [ESP + 0x1028]    ; 0045e0bd
    PUSH EBP                            ; 0045e0c4
    LEA EAX,[ESP + 0x10]                ; 0045e0c5
    PUSH EAX                            ; 0045e0c9
    MOV EAX,dword ptr [ESP + 0x102c]    ; 0045e0ca
    XOR ECX,ECX                         ; 0045e0d1
    PUSH EAX                            ; 0045e0d3
    MOV dword ptr [ESP + 0x1018],ECX    ; 0045e0d4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000 ; 0045e0db
        ;   XREF to: 0045e000 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000()
    ADD ESP,0x18                        ; 0045e0e0
    ADD ESP,0x1004                      ; 0045e0e3
    POP EBP                             ; 0045e0e9
    POP EDI                             ; 0045e0ea
    POP ESI                             ; 0045e0eb
    POP EBX                             ; 0045e0ec
    RET                                 ; 0045e0ed

