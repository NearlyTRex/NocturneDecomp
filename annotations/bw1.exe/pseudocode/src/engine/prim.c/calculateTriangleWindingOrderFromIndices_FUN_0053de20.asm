; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_0053de20(SMRGLPrimitiveTriangle *triangle)
;
; Parameters:
; SMRGLPrimitiveTriangle * Stack[0x4]:4   triangle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280 at 0048445e
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_00713a7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053de20
        ;   Label: engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_0053de20
    PUSH ESI                            ; 0053de21
    PUSH EDI                            ; 0053de22
    PUSH EBP                            ; 0053de23
    MOV EBP,ESP                         ; 0053de24
    SUB ESP,0x14                        ; 0053de26
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053de29
    MOV EDX,dword ptr [EBX + 0x18]      ; 0053de2c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053de2f
    SUB EAX,EDX                         ; 0053de36
    MOV ECX,0x629014                    ; 0053de38 | DAT_00629014
    SHL EAX,0x4                         ; 0053de3d
    MOV EDX,dword ptr [EBX + 0x24]      ; 0053de40
    ADD ECX,EAX                         ; 0053de43
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053de45
    MOV EBX,dword ptr [EBX + 0x30]      ; 0053de4c
    SUB EAX,EDX                         ; 0053de4f
    LEA EDX,[EBX*0x4 + 0x0]             ; 0053de51
    SHL EAX,0x4                         ; 0053de58
    SUB EDX,EBX                         ; 0053de5b
    ADD EAX,0x629014                    ; 0053de5d | DAT_00629014
    SHL EDX,0x4                         ; 0053de62
    MOV EBX,dword ptr [0x00713a7c]      ; 0053de65 | DAT_00713a7c
    ADD EDX,0x629014                    ; 0053de6b | DAT_00629014
    CMP EBX,0x1                         ; 0053de71
    JNZ 0x0053dede                      ; 0053de74
        ;   XREF to: 0053dede (CONDITIONAL_JUMP)  ; LAB_0053dede
    MOV EDI,dword ptr [ECX + 0x10]      ; 0053de76 | DAT_00629024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053de79 | DAT_00629024
    SUB EBX,EDI                         ; 0053de7c
    MOV dword ptr [EBP + -0x14],EBX     ; 0053de7e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0053de81 | DAT_00629028
    MOV ESI,dword ptr [ECX + 0x14]      ; 0053de84 | DAT_00629028
    SUB EBX,ESI                         ; 0053de87
    MOV dword ptr [EBP + -0x10],EBX     ; 0053de89
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053de8c | DAT_00629024
    MOV EDI,dword ptr [EAX + 0x10]      ; 0053de8f | DAT_00629024
    SUB ECX,EDI                         ; 0053de92
    MOV dword ptr [EBP + -0xc],ECX      ; 0053de94
    MOV EDX,dword ptr [EDX + 0x14]      ; 0053de97 | DAT_00629028
    MOV ECX,dword ptr [EAX + 0x14]      ; 0053de9a | DAT_00629028
    SUB EDX,ECX                         ; 0053de9d
    MOV dword ptr [EBP + -0x8],EDX      ; 0053de9f
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 0053dea2
        ;   Label: LAB_0053dea2
    IMUL dword ptr [EBP + 0xfffffff8]   ; 0053dea8
    MOV EBX,EAX                         ; 0053deae
    MOV ECX,EDX                         ; 0053deb0
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 0053deb2
    IMUL dword ptr [EBP + 0xfffffff4]   ; 0053deb8
    SUB EAX,EBX                         ; 0053debe
    SBB EDX,ECX                         ; 0053dec0
    MOV EAX,0x0                         ; 0053dec2
    JGE 0x0053dece                      ; 0053dec7
        ;   XREF to: 0053dece (CONDITIONAL_JUMP)  ; LAB_0053dece
    MOV EAX,0x1                         ; 0053dec9
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 0053dece
        ;   Label: LAB_0053dece
    MOV EAX,dword ptr [EBP + -0x4]      ; 0053ded4
    MOV ESP,EBP                         ; 0053ded7
    POP EBP                             ; 0053ded9
    POP EDI                             ; 0053deda
    POP ESI                             ; 0053dedb
    POP EBX                             ; 0053dedc
    RET                                 ; 0053dedd
    MOV ESI,dword ptr [ECX + 0x10]      ; 0053dede | DAT_00629024
        ;   Label: LAB_0053dede
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053dee1 | DAT_00629024
    SUB EBX,ESI                         ; 0053dee4
    MOV dword ptr [EBP + -0xc],EBX      ; 0053dee6
    MOV EBX,dword ptr [EAX + 0x14]      ; 0053dee9 | DAT_00629028
    MOV EDI,dword ptr [ECX + 0x14]      ; 0053deec | DAT_00629028
    SUB EBX,EDI                         ; 0053deef
    MOV dword ptr [EBP + -0x8],EBX      ; 0053def1
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053def4 | DAT_00629024
    MOV EBX,dword ptr [EAX + 0x10]      ; 0053def7 | DAT_00629024
    SUB ECX,EBX                         ; 0053defa
    MOV dword ptr [EBP + -0x14],ECX     ; 0053defc
    MOV EDX,dword ptr [EDX + 0x14]      ; 0053deff | DAT_00629028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0053df02 | DAT_00629028
    SUB EDX,ESI                         ; 0053df05
    MOV dword ptr [EBP + -0x10],EDX     ; 0053df07
    JMP 0x0053dea2                      ; 0053df0a
        ;   XREF to: 0053dea2 (UNCONDITIONAL_JUMP)  ; LAB_0053dea2

