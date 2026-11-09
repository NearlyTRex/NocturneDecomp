; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clearZBox_FUN_00566230(int left,int right,int top,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   right
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   bottom
;
; XREF[1]:
;   engine_special.cpp_fillDepthRegion_FUN_00560ec2 at 00560edc
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6054
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566230 | DAT_01c6cee8
        ;   Label: engine_special.cpp_clearZBox_FUN_00566230
    JNZ 0x0056623c                      ; 00566237
        ;   XREF to: 0056623c (CONDITIONAL_JUMP)  ; LAB_0056623c
    XOR EAX,EAX                         ; 00566239
    RET                                 ; 0056623b
    PUSH EDI                            ; 0056623c
        ;   Label: LAB_0056623c
    PUSH ESI                            ; 0056623d
    PUSH EBX                            ; 0056623e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056623f
    PUSH ECX                            ; 00566243
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00566244
    PUSH EBX                            ; 00566248
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00566249
    PUSH ESI                            ; 0056624d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0056624e
    PUSH EDI                            ; 00566252
    CALL dword ptr [0x02cf6054]         ; 00566253 | DAT_02cf6054
    ADD ESP,0x10                        ; 00566259
    POP EBX                             ; 0056625c
    POP ESI                             ; 0056625d
    POP EDI                             ; 0056625e
    RET                                 ; 0056625f

