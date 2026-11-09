; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_FUN_00560050(int slot,int left,int top,int right,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   slot
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30 at 0043be84
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50 at 0043bc19
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bc3c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00560050
        ;   Label: engine_special.cpp_FUN_00560050
    CMP dword ptr [0x01c37788],0x0      ; 00560051 | DAT_01c37788
    JNZ 0x0056005e                      ; 00560058
        ;   XREF to: 0056005e (CONDITIONAL_JUMP)  ; LAB_0056005e
    XOR EAX,EAX                         ; 0056005a
    POP EBP                             ; 0056005c
    RET                                 ; 0056005d
    PUSH EDI                            ; 0056005e
        ;   Label: LAB_0056005e
    PUSH ESI                            ; 0056005f
    PUSH EBX                            ; 00560060
    MOV ECX,dword ptr [ESP + 0x24]      ; 00560061
    PUSH ECX                            ; 00560065
    MOV EBX,dword ptr [ESP + 0x24]      ; 00560066
    PUSH EBX                            ; 0056006a
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056006b
    PUSH ESI                            ; 0056006f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00560070
    PUSH EDI                            ; 00560074
    MOV EBP,dword ptr [ESP + 0x24]      ; 00560075
    PUSH EBP                            ; 00560079
    CALL dword ptr [0x0264bc3c]         ; 0056007a | DAT_0264bc3c
    ADD ESP,0x14                        ; 00560080
    POP EBX                             ; 00560083
    POP ESI                             ; 00560084
    POP EDI                             ; 00560085
    POP EBP                             ; 00560086
    RET                                 ; 00560087

