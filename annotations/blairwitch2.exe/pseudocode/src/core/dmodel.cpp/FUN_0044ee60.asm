; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_FUN_0044ee60(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0 at 0044dda1
;
; Referenced Globals:
;   undefined4 DAT_005cf927
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ee60
        ;   Label: core_dmodel.cpp_FUN_0044ee60
    PUSH ESI                            ; 0044ee61
    PUSH EDI                            ; 0044ee62
    PUSH EBP                            ; 0044ee63
    SUB ESP,0x18                        ; 0044ee64
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044ee67
    XOR EDX,EDX                         ; 0044ee6b
    MOV ECX,dword ptr [EBP + 0x100]     ; 0044ee6d
    MOV dword ptr [ESP + 0x10],EDX      ; 0044ee73
    TEST ECX,ECX                        ; 0044ee77
    JLE 0x0044efb8                      ; 0044ee79
        ;   XREF to: 0044efb8 (CONDITIONAL_JUMP)  ; LAB_0044efb8
    LEA EAX,[EBP + 0x338]               ; 0044ee7f
    MOV dword ptr [ESP + 0xc],EDX       ; 0044ee85
    MOV dword ptr [ESP + 0x14],EAX      ; 0044ee89
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044ee8d
        ;   Label: LAB_0044ee8d
    IMUL EAX,dword ptr [EBP + 0x104]    ; 0044ee91
    IMUL EAX,EAX,0xc                    ; 0044ee98
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044ee9b
    MOV EDI,dword ptr [EBP + 0x350]     ; 0044ee9f
    ADD EDI,EBX                         ; 0044eea5
    MOV EBX,dword ptr [EBP + 0x10c]     ; 0044eea7
    ADD EBX,EAX                         ; 0044eead
    FLD double ptr [0x005cf927]         ; 0044eeaf | DAT_005cf927
    FILD dword ptr [EBX]                ; 0044eeb5
    FMUL ST1                            ; 0044eeb7
    FSTP float ptr [ESP]                ; 0044eeb9
    FILD dword ptr [EBX + 0x4]          ; 0044eebc
    FMUL ST1                            ; 0044eebf
    FSTP float ptr [ESP + 0x4]          ; 0044eec1
    FILD dword ptr [EBX + 0x8]          ; 0044eec5
    FMULP                               ; 0044eec8
    MOV ESI,EDI                         ; 0044eeca
    MOV EAX,ESP                         ; 0044eecc
    FSTP float ptr [ESP + 0x8]          ; 0044eece
    CMP EDI,EAX                         ; 0044eed2
    JNZ 0x0044efc0                      ; 0044eed4
        ;   XREF to: 0044efc0 (CONDITIONAL_JUMP)  ; LAB_0044efc0
    MOV EAX,ESP                         ; 0044eeda
        ;   Label: LAB_0044eeda
    ADD ESI,0xc                         ; 0044eedc
    CMP ESI,EAX                         ; 0044eedf
    JZ 0x0044eef6                       ; 0044eee1
        ;   XREF to: 0044eef6 (CONDITIONAL_JUMP)  ; LAB_0044eef6
    MOV EAX,dword ptr [ESP]             ; 0044eee3
    MOV dword ptr [ESI],EAX             ; 0044eee6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044eee8
    MOV dword ptr [ESI + 0x4],EAX       ; 0044eeec
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044eeef
    MOV dword ptr [ESI + 0x8],EAX       ; 0044eef3
    MOV ESI,0x1                         ; 0044eef6
        ;   Label: LAB_0044eef6
    CMP ESI,dword ptr [EBP + 0x104]     ; 0044eefb
    JGE 0x0044ef43                      ; 0044ef01
        ;   XREF to: 0044ef43 (CONDITIONAL_JUMP)  ; LAB_0044ef43
    FILD dword ptr [EBX + 0xc]          ; 0044ef03
        ;   Label: LAB_0044ef03
    FMUL double ptr [0x005cf927]        ; 0044ef06 | DAT_005cf927
    FSTP float ptr [ESP]                ; 0044ef0c
    FILD dword ptr [EBX + 0x10]         ; 0044ef0f
    FMUL double ptr [0x005cf927]        ; 0044ef12 | DAT_005cf927
    MOV EAX,ESP                         ; 0044ef18
    FSTP float ptr [ESP + 0x4]          ; 0044ef1a
    FILD dword ptr [EBX + 0x14]         ; 0044ef1e
    FMUL double ptr [0x005cf927]        ; 0044ef21 | DAT_005cf927
    PUSH EAX                            ; 0044ef27
    ADD EBX,0xc                         ; 0044ef28
    INC ESI                             ; 0044ef2b
    PUSH EDI                            ; 0044ef2c
    FSTP float ptr [ESP + 0x10]         ; 0044ef2d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0044ef31
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    MOV EDX,dword ptr [EBP + 0x104]     ; 0044ef36
    ADD ESP,0x8                         ; 0044ef3c
    CMP ESI,EDX                         ; 0044ef3f
    JL 0x0044ef03                       ; 0044ef41
        ;   XREF to: 0044ef03 (CONDITIONAL_JUMP)  ; LAB_0044ef03
    CMP dword ptr [ESP + 0x10],0x0      ; 0044ef43
        ;   Label: LAB_0044ef43
    JNZ 0x0044ef7b                      ; 0044ef48
        ;   XREF to: 0044ef7b (CONDITIONAL_JUMP)  ; LAB_0044ef7b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044ef4a
    MOV EBX,EDI                         ; 0044ef4e
    CMP EDI,EAX                         ; 0044ef50
    JZ 0x0044ef64                       ; 0044ef52
        ;   XREF to: 0044ef64 (CONDITIONAL_JUMP)  ; LAB_0044ef64
    MOV EDX,dword ptr [EDI]             ; 0044ef54
    MOV dword ptr [EAX],EDX             ; 0044ef56
    MOV EDX,dword ptr [EDI + 0x4]       ; 0044ef58
    MOV dword ptr [EAX + 0x4],EDX       ; 0044ef5b
    MOV EDX,dword ptr [EDI + 0x8]       ; 0044ef5e
    MOV dword ptr [EAX + 0x8],EDX       ; 0044ef61
    ADD EAX,0xc                         ; 0044ef64
        ;   Label: LAB_0044ef64
    CMP EAX,EBX                         ; 0044ef67
    JZ 0x0044ef7b                       ; 0044ef69
        ;   XREF to: 0044ef7b (CONDITIONAL_JUMP)  ; LAB_0044ef7b
    MOV EDX,dword ptr [EBX]             ; 0044ef6b
    MOV dword ptr [EAX],EDX             ; 0044ef6d
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044ef6f
    MOV dword ptr [EAX + 0x4],EDX       ; 0044ef72
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044ef75
    MOV dword ptr [EAX + 0x8],EDX       ; 0044ef78
    PUSH EDI                            ; 0044ef7b
        ;   Label: LAB_0044ef7b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044ef7c
    PUSH EBX                            ; 0044ef80
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0044ef81
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0044ef86
    ADD EDI,0xc                         ; 0044ef89
    PUSH EDI                            ; 0044ef8c
    PUSH EBX                            ; 0044ef8d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0044ef8e
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0044ef93
    MOV EDX,dword ptr [EBP + 0x100]     ; 0044ef96
    MOV EDI,dword ptr [ESP + 0xc]       ; 0044ef9c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044efa0
    ADD EDI,0x18                        ; 0044efa4
    INC EAX                             ; 0044efa7
    MOV dword ptr [ESP + 0xc],EDI       ; 0044efa8
    MOV dword ptr [ESP + 0x10],EAX      ; 0044efac
    CMP EAX,EDX                         ; 0044efb0
    JL 0x0044ee8d                       ; 0044efb2
        ;   XREF to: 0044ee8d (CONDITIONAL_JUMP)  ; LAB_0044ee8d
    ADD ESP,0x18                        ; 0044efb8
        ;   Label: LAB_0044efb8
    POP EBP                             ; 0044efbb
    POP EDI                             ; 0044efbc
    POP ESI                             ; 0044efbd
    POP EBX                             ; 0044efbe
    RET                                 ; 0044efbf
    MOV EAX,dword ptr [ESP]             ; 0044efc0
        ;   Label: LAB_0044efc0
    MOV dword ptr [EDI],EAX             ; 0044efc3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044efc5
    MOV dword ptr [EDI + 0x4],EAX       ; 0044efc9
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044efcc
    MOV dword ptr [EDI + 0x8],EAX       ; 0044efd0
    JMP 0x0044eeda                      ; 0044efd3
        ;   XREF to: 0044eeda (UNCONDITIONAL_JUMP)  ; LAB_0044eeda

