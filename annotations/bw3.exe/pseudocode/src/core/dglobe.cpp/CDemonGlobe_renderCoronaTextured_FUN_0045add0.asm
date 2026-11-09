; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005baff1
;   undefined4 DAT_005de380
;   undefined4 DAT_005f2af8
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_special.cpp_FUN_005632a3
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045add0
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0
    PUSH ESI                            ; 0045add1
    PUSH EDI                            ; 0045add2
    PUSH EBP                            ; 0045add3
    SUB ESP,0x40                        ; 0045add4
    MOV EBP,dword ptr [ESP + 0x54]      ; 0045add7
    LEA EAX,[EBP + 0x24]                ; 0045addb
    PUSH EAX                            ; 0045adde
    MOV EDX,dword ptr [0x005f2af8]      ; 0045addf | DAT_005f2af8
    PUSH EDX                            ; 0045ade5
    XOR ESI,ESI                         ; 0045ade6
    XOR EDI,EDI                         ; 0045ade8
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045adea
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045adef
    FILD dword ptr [EDI + 0x5f1954]     ; 0045adf2
        ;   Label: LAB_0045adf2
    FMUL double ptr [0x005baff1]        ; 0045adf8 | DAT_005baff1
    FMUL float ptr [EBP + 0x30]         ; 0045adfe
    FILD dword ptr [EDI + 0x5f1958]     ; 0045ae01
    FMUL double ptr [0x005baff1]        ; 0045ae07 | DAT_005baff1
    FXCH                                ; 0045ae0d
    FSTP float ptr [ESP + 0x28]         ; 0045ae0f
    FMUL float ptr [EBP + 0x30]         ; 0045ae13
    FILD dword ptr [EDI + 0x5f195c]     ; 0045ae16
    FMUL double ptr [0x005baff1]        ; 0045ae1c | DAT_005baff1
    FXCH                                ; 0045ae22
    FSTP float ptr [ESP + 0x2c]         ; 0045ae24
    FMUL float ptr [EBP + 0x30]         ; 0045ae28
    LEA EBX,[ESP + 0x34]                ; 0045ae2b
    LEA EAX,[ESP + 0x28]                ; 0045ae2f
    MOV EDX,dword ptr [0x005f2af8]      ; 0045ae33 | DAT_005f2af8
    FSTP float ptr [ESP + 0x30]         ; 0045ae39
    FLD float ptr [EAX]                 ; 0045ae3d
    FMUL float ptr [0x005de380]         ; 0045ae3f | DAT_005de380
    FISTP dword ptr [EBX]               ; 0045ae45
    FLD float ptr [EAX + 0x4]           ; 0045ae47
    FMUL float ptr [0x005de380]         ; 0045ae4a | DAT_005de380
    FISTP dword ptr [EBX + 0x4]         ; 0045ae50
    FLD float ptr [EAX + 0x8]           ; 0045ae53
    FMUL float ptr [0x005de380]         ; 0045ae56 | DAT_005de380
    FISTP dword ptr [EBX + 0x8]         ; 0045ae5c
    LEA EAX,[ESP + 0x34]                ; 0045ae5f
    PUSH EAX                            ; 0045ae63
    MOV EAX,dword ptr [EDX]             ; 0045ae64
    ADD EAX,ESI                         ; 0045ae66
    PUSH EAX                            ; 0045ae68
    CALL engine_special.cpp_FUN_005632a3 ; 0045ae69
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2af8]                ; 0045ae6e | DAT_005f2af8
    MOV EBX,dword ptr [EAX]             ; 0045ae73
    MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000 ; 0045ae75
    MOV EBX,dword ptr [EAX]             ; 0045ae7d
    MOV dword ptr [ESI + EBX*0x1 + 0x1c],0x800000 ; 0045ae7f
    MOV EBX,dword ptr [EAX]             ; 0045ae87
    MOV dword ptr [ESI + EBX*0x1 + 0x2c],0x8000 ; 0045ae89
    MOV EDX,dword ptr [EAX]             ; 0045ae91
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0045ae93
    MOV EDX,dword ptr [EAX]             ; 0045ae9b
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 0045ae9d
    ADD ESI,0x30                        ; 0045aea5
    MOV EAX,dword ptr [EAX]             ; 0045aea8
    ADD EDI,0xc                         ; 0045aeaa
    ADD ESP,0x8                         ; 0045aead
    MOV dword ptr [ESI + EAX*0x1 + -0x8],0xffff ; 0045aeb0
    CMP EDI,0x2e8                       ; 0045aeb8
    JNZ 0x0045adf2                      ; 0045aebe
        ;   XREF to: 0045adf2 (CONDITIONAL_JUMP)  ; LAB_0045adf2
    PUSH 0x5f193c                       ; 0045aec4
    CALL engine_texture.cpp_FUN_0056aa10 ; 0045aec9
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    XOR EBX,EBX                         ; 0045aece
    ADD ESP,0x4                         ; 0045aed0
    MOV EAX,dword ptr [EBX + 0x5f1c3c]  ; 0045aed3
        ;   Label: LAB_0045aed3
    MOV dword ptr [ESP + 0x4],EAX       ; 0045aed9
    MOV EAX,dword ptr [EBX + 0x5f1c40]  ; 0045aedd
    MOV dword ptr [ESP + 0x8],EAX       ; 0045aee3
    MOV EAX,dword ptr [EBX + 0x5f1c44]  ; 0045aee7
    MOV dword ptr [ESP + 0xc],EAX       ; 0045aeed
    MOV EAX,dword ptr [EBX + 0x5f1c48]  ; 0045aef1
    FILD dword ptr [EBX + 0x5f1c4c]     ; 0045aef7
    MOV dword ptr [ESP + 0x10],EAX      ; 0045aefd
    MOV EAX,dword ptr [EBX + 0x5f1c50]  ; 0045af01
    FMUL float ptr [EBP + 0x30]         ; 0045af07
    MOV dword ptr [ESP + 0x18],EAX      ; 0045af0a
    MOV EAX,dword ptr [EBX + 0x5f1c54]  ; 0045af0e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045af14
    MOV EAX,dword ptr [EBX + 0x5f1c58]  ; 0045af18
    MOV dword ptr [ESP + 0x20],EAX      ; 0045af1e
    MOV EAX,dword ptr [EBX + 0x5f1c5c]  ; 0045af22
    MOV ECX,dword ptr [0x005f2af8]      ; 0045af28 | DAT_005f2af8
    MOV dword ptr [ESP + 0x24],EAX      ; 0045af2e
    MOV EAX,ESP                         ; 0045af32
    ADD EBX,0x24                        ; 0045af34
    PUSH EAX                            ; 0045af37
    CALL crt_math.c_round_FUN_005a3120  ; 0045af38
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH ECX                            ; 0045af3d
    FISTP dword ptr [ESP + 0x1c]        ; 0045af3e
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0045af42
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045af47
    CMP EBX,0xbd0                       ; 0045af4a
    JNZ 0x0045aed3                      ; 0045af50
        ;   XREF to: 0045aed3 (CONDITIONAL_JUMP)  ; LAB_0045aed3
    ADD ESP,0x40                        ; 0045af52
    POP EBP                             ; 0045af55
    POP EDI                             ; 0045af56
    POP ESI                             ; 0045af57
    POP EBX                             ; 0045af58
    RET                                 ; 0045af59

