; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_game.cpp_FUN_004bb620 at 004bb872
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ad70
        ;   Label: engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_0046ad70
    PUSH ESI                            ; 0046ad71
    PUSH EDI                            ; 0046ad72
    PUSH EBP                            ; 0046ad73
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046ad74
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046ad78
    CMP dword ptr [EBP + 0xc],0x0       ; 0046ad7c
    JNZ 0x0046adf1                      ; 0046ad80
        ;   XREF to: 0046adf1 (CONDITIONAL_JUMP)  ; LAB_0046adf1
    MOV ECX,0xffffffff                  ; 0046ad86
        ;   Label: LAB_0046ad86
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046ad8b
    XOR EDX,EDX                         ; 0046ad8e
    TEST EBX,EBX                        ; 0046ad90
    JLE 0x0046adb0                      ; 0046ad92
        ;   XREF to: 0046adb0 (CONDITIONAL_JUMP)  ; LAB_0046adb0
    MOV EAX,ESI                         ; 0046ad94
    MOV EDI,dword ptr [EBP]             ; 0046ad96
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046ad99
        ;   Label: LAB_0046ad99
    IMUL EBX,EBX,0x30                   ; 0046ad9c
    INC EDX                             ; 0046ad9f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046ada0
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046ada4
    ADD EAX,0x4                         ; 0046ada7
    CMP EDX,EBX                         ; 0046adaa
    JL 0x0046ad99                       ; 0046adac
        ;   XREF to: 0046ad99 (CONDITIONAL_JUMP)  ; LAB_0046ad99
    MOV EAX,EAX                         ; 0046adae
    TEST ECX,0x80000000                 ; 0046adb0
        ;   Label: LAB_0046adb0
    JZ 0x0046adbd                       ; 0046adb6
        ;   XREF to: 0046adbd (CONDITIONAL_JUMP)  ; LAB_0046adbd
    TEST CL,0x1f                        ; 0046adb8
    JNZ 0x0046adec                      ; 0046adbb
        ;   XREF to: 0046adec (CONDITIONAL_JUMP)  ; LAB_0046adec
    CMP dword ptr [EBP + 0x4],0x0       ; 0046adbd
        ;   Label: LAB_0046adbd
    JZ 0x0046ae03                       ; 0046adc1
        ;   XREF to: 0046ae03 (CONDITIONAL_JUMP)  ; LAB_0046ae03
    XOR EDX,EDX                         ; 0046adc3
    MOV EAX,0x46e936                    ; 0046adc5
    MOV dword ptr [0x01c38b54],EDX      ; 0046adca | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046add0 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046add6 | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 0046addb
        ;   Label: LAB_0046addb
    PUSH EAX                            ; 0046adde
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046addf
    PUSH EBX                            ; 0046ade2
    PUSH EBP                            ; 0046ade3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046ade4
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046ade9
    POP EBP                             ; 0046adec
        ;   Label: LAB_0046adec
    POP EDI                             ; 0046aded
    POP ESI                             ; 0046adee
    POP EBX                             ; 0046adef
    RET                                 ; 0046adf0
    LEA EAX,[ESI + 0x8]                 ; 0046adf1
        ;   Label: LAB_0046adf1
    PUSH EAX                            ; 0046adf4
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046adf5
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046adfa
    TEST EAX,EAX                        ; 0046adfd
    JZ 0x0046adec                       ; 0046adff
        ;   XREF to: 0046adec (CONDITIONAL_JUMP)  ; LAB_0046adec
    JMP 0x0046ad86                      ; 0046ae01
        ;   XREF to: 0046ad86 (UNCONDITIONAL_JUMP)  ; LAB_0046ad86
    CMP dword ptr [0x006141c0],0x20     ; 0046ae03 | DAT_006141c0
        ;   Label: LAB_0046ae03
    JNZ 0x0046ae2b                      ; 0046ae0a
        ;   XREF to: 0046ae2b (CONDITIONAL_JUMP)  ; LAB_0046ae2b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046ae0c | DAT_01c35e6c
    XOR EDI,EDI                         ; 0046ae16
        ;   Label: LAB_0046ae16
    MOV EBX,0x327                       ; 0046ae18
    MOV dword ptr [0x01c38b58],EDI      ; 0046ae1d | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EBX      ; 0046ae23 | DAT_01c38b54
    JMP 0x0046addb                      ; 0046ae29
        ;   XREF to: 0046addb (UNCONDITIONAL_JUMP)  ; LAB_0046addb
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046ae2b | DAT_01c35e6c
        ;   Label: LAB_0046ae2b
    JMP 0x0046ae16                      ; 0046ae35
        ;   XREF to: 0046ae16 (UNCONDITIONAL_JUMP)  ; LAB_0046ae16

