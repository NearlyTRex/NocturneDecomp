; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_addBatchTriangle_FUN_004f0dc0(float *v0,float *v1,float *v2)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; float *          Stack[0xc]:4   v2
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_mini3d.cpp_clipBatchTriangle_FUN_004f1020 at 004f10ab
;
; Referenced Globals:
;   undefined4 DAT_01d76cf8
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a6c8
;   undefined4 DAT_01d7a6cc
;   undefined4 DAT_01d7a6d0
;
; Called Functions:
;   engine_mini3d.cpp_flushTriangleBatch_FUN_004f0f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0dc0
        ;   Label: engine_mini3d.cpp_addBatchTriangle_FUN_004f0dc0
    PUSH ESI                            ; 004f0dc1
    PUSH EBP                            ; 004f0dc2
    SUB ESP,0x18                        ; 004f0dc3
    MOV ESI,dword ptr [ESP + 0x28]      ; 004f0dc6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004f0dca
    MOV EBP,dword ptr [ESP + 0x30]      ; 004f0dce
    FLD float ptr [EBP + 0x14]          ; 004f0dd2
    FLD float ptr [EBX + 0x18]          ; 004f0dd5
    FSUB float ptr [ESI + 0x18]         ; 004f0dd8
    FXCH                                ; 004f0ddb
    FSUB float ptr [EBX + 0x14]         ; 004f0ddd
    FXCH                                ; 004f0de0
    FSTP float ptr [ESP]                ; 004f0de2
    FSTP float ptr [ESP + 0xc]          ; 004f0de5
    FLD float ptr [ESP]                 ; 004f0de9
    FMUL float ptr [ESP + 0xc]          ; 004f0dec
    FLD float ptr [EBP + 0x18]          ; 004f0df0
    FLD float ptr [EBX + 0x14]          ; 004f0df3
    FSUB float ptr [ESI + 0x14]         ; 004f0df6
    FXCH                                ; 004f0df9
    FSUB float ptr [EBX + 0x18]         ; 004f0dfb
    FXCH                                ; 004f0dfe
    FSTP float ptr [ESP + 0x4]          ; 004f0e00
    FSTP float ptr [ESP + 0x8]          ; 004f0e04
    FLD float ptr [ESP + 0x4]           ; 004f0e08
    FMUL float ptr [ESP + 0x8]          ; 004f0e0c
    MOV EDX,dword ptr [0x01d76cf8]      ; 004f0e10 | DAT_01d76cf8
    FXCH                                ; 004f0e16
    FSTP float ptr [ESP + 0x10]         ; 004f0e18
    FSTP float ptr [ESP + 0x14]         ; 004f0e1c
    TEST EDX,EDX                        ; 004f0e20
    JNZ 0x004f0eeb                      ; 004f0e22
        ;   XREF to: 004f0eeb (CONDITIONAL_JUMP)  ; LAB_004f0eeb
    FLD float ptr [ESP + 0x14]          ; 004f0e28
    FCOMP float ptr [ESP + 0x10]        ; 004f0e2c
    FNSTSW AX                           ; 004f0e30
    SAHF                                ; 004f0e32
    JBE 0x004f0ee4                      ; 004f0e33
        ;   XREF to: 004f0ee4 (CONDITIONAL_JUMP)  ; LAB_004f0ee4
    MOV ECX,dword ptr [0x01d7a6cc]      ; 004f0e39 | DAT_01d7a6cc
        ;   Label: LAB_004f0e39
    MOV EAX,[0x01d7a6c8]                ; 004f0e3f | DAT_01d7a6c8
    ADD EAX,ECX                         ; 004f0e44
    ADD EAX,0x3                         ; 004f0e46
    CMP EAX,0x2710                      ; 004f0e49
    JL 0x004f0efd                       ; 004f0e4e
        ;   XREF to: 004f0efd (CONDITIONAL_JUMP)  ; LAB_004f0efd
    CALL engine_mini3d.cpp_flushTriangleBatch_FUN_004f0f20 ; 004f0e54
        ;   XREF to: 004f0f20 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_flushTriangleBatch_FUN_004f0f20()
        ;   Label: LAB_004f0e54
    PUSH EDI                            ; 004f0e59
        ;   Label: LAB_004f0e59
    MOV EDI,dword ptr [0x01d7a6cc]      ; 004f0e5a | DAT_01d7a6cc
    MOV EDX,dword ptr [0x01d7a6c8]      ; 004f0e60 | DAT_01d7a6c8
    ADD EDX,EDI                         ; 004f0e66
    MOV EAX,[0x01d76f60]                ; 004f0e68 | DAT_01d76f60
    SHL EDX,0x6                         ; 004f0e6d
    ADD EAX,EDX                         ; 004f0e70
    MOV ECX,0x10                        ; 004f0e72
    MOV EDI,EAX                         ; 004f0e77
    MOVSD.REP ES:EDI,ESI                ; 004f0e79
    MOV ECX,0x10                        ; 004f0e7b
    MOV ESI,EBX                         ; 004f0e80
    LEA EDI,[EAX + 0x40]                ; 004f0e82
    MOVSD.REP ES:EDI,ESI                ; 004f0e85
    MOV ECX,0x10                        ; 004f0e87
    MOV ESI,EBP                         ; 004f0e8c
    LEA EDI,[EAX + 0x80]                ; 004f0e8e
    MOV EDX,dword ptr [0x01d7a6d0]      ; 004f0e94 | DAT_01d7a6d0
    MOV AX,[0x01d7a6cc]                 ; 004f0e9a | DAT_01d7a6cc
    MOVSD.REP ES:EDI,ESI                ; 004f0ea0
    MOV EBP,dword ptr [0x01d7a6cc]      ; 004f0ea2 | DAT_01d7a6cc
    MOV SI,word ptr [0x01d7a6cc]        ; 004f0ea8 | DAT_01d7a6cc
    MOV word ptr [EDX*0x2 + 0x1d7a6d4],AX ; 004f0eaf
    MOV EDX,EAX                         ; 004f0eb7
    MOV EAX,[0x01d7a6d0]                ; 004f0eb9 | DAT_01d7a6d0
    ADD EBP,0x3                         ; 004f0ebe
    ADD EAX,0x3                         ; 004f0ec1
    INC EDX                             ; 004f0ec4
    ADD ESI,0x2                         ; 004f0ec5
    MOV word ptr [EAX*0x2 + 0x1d7a6d0],DX ; 004f0ec8 | DAT_01d7a6d0
    MOV dword ptr [0x01d7a6cc],EBP      ; 004f0ed0 | DAT_01d7a6cc
    MOV word ptr [EAX*0x2 + 0x1d7a6d2],SI ; 004f0ed6
    MOV [0x01d7a6d0],EAX                ; 004f0ede | DAT_01d7a6d0
    POP EDI                             ; 004f0ee3
    ADD ESP,0x18                        ; 004f0ee4
        ;   Label: LAB_004f0ee4
    POP EBP                             ; 004f0ee7
    POP ESI                             ; 004f0ee8
    POP EBX                             ; 004f0ee9
    RET                                 ; 004f0eea
    FLD float ptr [ESP + 0x14]          ; 004f0eeb
        ;   Label: LAB_004f0eeb
    FCOMP float ptr [ESP + 0x10]        ; 004f0eef
    FNSTSW AX                           ; 004f0ef3
    SAHF                                ; 004f0ef5
    JNC 0x004f0ee4                      ; 004f0ef6
        ;   XREF to: 004f0ee4 (CONDITIONAL_JUMP)  ; LAB_004f0ee4
    JMP 0x004f0e39                      ; 004f0ef8
        ;   XREF to: 004f0e39 (UNCONDITIONAL_JUMP)  ; LAB_004f0e39
    MOV EAX,[0x01d7a6d0]                ; 004f0efd | DAT_01d7a6d0
        ;   Label: LAB_004f0efd
    ADD EAX,0x3                         ; 004f0f02
    CMP EAX,0x2710                      ; 004f0f05
    JGE 0x004f0e54                      ; 004f0f0a
        ;   XREF to: 004f0e54 (CONDITIONAL_JUMP)  ; LAB_004f0e54
    JMP 0x004f0e59                      ; 004f0f10
        ;   XREF to: 004f0e59 (UNCONDITIONAL_JUMP)  ; LAB_004f0e59

