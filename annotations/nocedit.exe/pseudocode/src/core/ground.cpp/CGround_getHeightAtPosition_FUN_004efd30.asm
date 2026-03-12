; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   world_x
; int              Stack[0xc]:4   world_z
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_005e1f50 at 005e1f96
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efd30
        ;   Label: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
    PUSH ESI                            ; 004efd31
    PUSH EDI                            ; 004efd32
    PUSH EBP                            ; 004efd33
    SUB ESP,0x14                        ; 004efd34
    MOV ECX,dword ptr [ESP + 0x28]      ; 004efd37
    MOV ESI,dword ptr [ESP + 0x30]      ; 004efd3b
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004efd3f
    SHL EBX,0x8                         ; 004efd42
    LEA EAX,[EBX + -0x1]                ; 004efd45
    MOV EDX,0x10000                     ; 004efd48
    AND EAX,ESI                         ; 004efd4d
    IMUL EDX                            ; 004efd4f
    IDIV EBX                            ; 004efd51
    MOV EBX,dword ptr [ECX + 0x1c]      ; 004efd53
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004efd56
    SHL EBX,0x8                         ; 004efd5a
    MOV EDI,EAX                         ; 004efd5d
    LEA EAX,[EBX + -0x1]                ; 004efd5f
    AND EAX,EDX                         ; 004efd62
    MOV EDX,0x10000                     ; 004efd64
    IMUL EDX                            ; 004efd69
    IDIV EBX                            ; 004efd6b
    MOV EBX,EAX                         ; 004efd6d
    MOV EBP,dword ptr [ECX + 0x1c]      ; 004efd6f
    XOR EDX,EDX                         ; 004efd72
    SHL EBP,0x8                         ; 004efd74
    MOV EAX,ESI                         ; 004efd77
    DIV EBP                             ; 004efd79
    MOV ESI,dword ptr [ECX + 0x8]       ; 004efd7b
    AND ESI,EAX                         ; 004efd7e
    XOR EDX,EDX                         ; 004efd80
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004efd82
    DIV EBP                             ; 004efd86
    MOV EDX,ESI                         ; 004efd88
    MOV EBP,dword ptr [ECX + 0xc]       ; 004efd8a
    AND EDX,0x1                         ; 004efd8d
    AND EAX,EBP                         ; 004efd90
    MOV dword ptr [ESP + 0xc],EDX       ; 004efd92
    MOV EDX,EAX                         ; 004efd96
    AND EDX,0x1                         ; 004efd98
    MOV dword ptr [ESP + 0x8],EDX       ; 004efd9b
    LEA EDX,[EAX + 0x1]                 ; 004efd9f
    MOV EBP,dword ptr [ESP + 0xc]       ; 004efda2
    MOV dword ptr [ESP + 0x10],EDX      ; 004efda6
    LEA EDX,[ESI + 0x1]                 ; 004efdaa
    CMP EBP,dword ptr [ESP + 0x8]       ; 004efdad
    JNZ 0x004efeab                      ; 004efdb1
        ;   XREF to: 004efeab (CONDITIONAL_JUMP)  ; LAB_004efeab
    CMP EDI,EBX                         ; 004efdb7
    JLE 0x004efe32                      ; 004efdb9
        ;   XREF to: 004efe32 (CONDITIONAL_JUMP)  ; LAB_004efe32
    MOV EBP,dword ptr [ECX]             ; 004efdbb
    IMUL EBP,EAX                        ; 004efdbd
    MOV EAX,dword ptr [ECX + 0x24]      ; 004efdc0
    ADD ESI,EBP                         ; 004efdc3
    MOV dword ptr [ESP + 0x8],EBP       ; 004efdc5
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004efdc9
    MOV EBP,dword ptr [ECX + 0x20]      ; 004efdcd
    IMUL EBP,ESI                        ; 004efdd0
    MOV dword ptr [ESP],EBP             ; 004efdd3
    MOV ESI,dword ptr [ECX + 0x8]       ; 004efdd6
    MOV EBP,dword ptr [ESP + 0x8]       ; 004efdd9
    AND ESI,EDX                         ; 004efddd
    ADD ESI,EBP                         ; 004efddf
    MOVSX ESI,word ptr [EAX + ESI*0x4]  ; 004efde1
    IMUL ESI,dword ptr [ECX + 0x20]     ; 004efde5
    MOV EBP,dword ptr [ESP + 0x10]      ; 004efde9
    AND EBP,dword ptr [ECX + 0xc]       ; 004efded
    IMUL EBP,dword ptr [ECX]            ; 004efdf0
    MOV dword ptr [ESP + 0x8],EBP       ; 004efdf3
    AND EDX,dword ptr [ECX + 0xc]       ; 004efdf7
    ADD EDX,dword ptr [ESP + 0x8]       ; 004efdfa
    MOV ECX,dword ptr [ECX + 0x20]      ; 004efdfe
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004efe01
    IMUL ECX,EAX                        ; 004efe05
    MOV EDX,ESI                         ; 004efe08
    MOV EAX,dword ptr [ESP]             ; 004efe0a
    SUB ECX,ESI                         ; 004efe0d
    SUB EDX,EAX                         ; 004efe0f
    MOV EAX,EDI                         ; 004efe11
    MOV ESI,dword ptr [ESP]             ; 004efe13
    IMUL EDX                            ; 004efe16
    SHRD EAX,EDX,0x10                   ; 004efe18
    MOV EDX,ECX                         ; 004efe1c
    ADD ESI,EAX                         ; 004efe1e
    MOV EAX,EBX                         ; 004efe20
    IMUL EDX                            ; 004efe22
    SHRD EAX,EDX,0x10                   ; 004efe24
    ADD EAX,ESI                         ; 004efe28
    ADD ESP,0x14                        ; 004efe2a
    POP EBP                             ; 004efe2d
    POP EDI                             ; 004efe2e
    POP ESI                             ; 004efe2f
    POP EBX                             ; 004efe30
    RET                                 ; 004efe31
    IMUL EAX,dword ptr [ECX]            ; 004efe32
        ;   Label: LAB_004efe32
    ADD EAX,ESI                         ; 004efe35
    MOV EBP,dword ptr [ECX + 0x24]      ; 004efe37
    SHL EAX,0x2                         ; 004efe3a
    ADD EAX,EBP                         ; 004efe3d
    MOVSX EAX,word ptr [EAX]            ; 004efe3f
    MOV dword ptr [ESP + 0xc],EBP       ; 004efe42
    MOV EBP,EAX                         ; 004efe46
    IMUL EBP,dword ptr [ECX + 0x20]     ; 004efe48
    MOV EAX,dword ptr [ESP + 0x10]      ; 004efe4c
    AND EAX,dword ptr [ECX + 0xc]       ; 004efe50
    IMUL EAX,dword ptr [ECX]            ; 004efe53
    MOV dword ptr [ESP + 0x8],EAX       ; 004efe56
    AND EDX,dword ptr [ECX + 0x8]       ; 004efe5a
    ADD EDX,dword ptr [ESP + 0x8]       ; 004efe5d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004efe61
    SHL EDX,0x2                         ; 004efe65
    ADD EDX,EAX                         ; 004efe68
    MOVSX EDX,word ptr [EDX]            ; 004efe6a
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004efe6d
    ADD ESI,dword ptr [ESP + 0x8]       ; 004efe71
    LEA EAX,[ESI*0x4 + 0x0]             ; 004efe75
    ADD EAX,dword ptr [ESP + 0xc]       ; 004efe7c
    MOV ECX,dword ptr [ECX + 0x20]      ; 004efe80
    MOVSX EAX,word ptr [EAX]            ; 004efe83
    IMUL ECX,EAX                        ; 004efe86
    MOV EAX,EDI                         ; 004efe89
    SUB EDX,ECX                         ; 004efe8b
    SUB ECX,EBP                         ; 004efe8d
    IMUL EDX                            ; 004efe8f
    SHRD EAX,EDX,0x10                   ; 004efe91
    MOV EDX,ECX                         ; 004efe95
    ADD EBP,EAX                         ; 004efe97
    MOV EAX,EBX                         ; 004efe99
    IMUL EDX                            ; 004efe9b
    SHRD EAX,EDX,0x10                   ; 004efe9d
    ADD EAX,EBP                         ; 004efea1
    ADD ESP,0x14                        ; 004efea3
    POP EBP                             ; 004efea6
    POP EDI                             ; 004efea7
    POP ESI                             ; 004efea8
    POP EBX                             ; 004efea9
    RET                                 ; 004efeaa
    MOV EBP,0x10000                     ; 004efeab
        ;   Label: LAB_004efeab
    SUB EBP,EDI                         ; 004efeb0
    MOV EDI,EBP                         ; 004efeb2
    CMP EBP,EBX                         ; 004efeb4
    JLE 0x004eff32                      ; 004efeb6
        ;   XREF to: 004eff32 (CONDITIONAL_JUMP)  ; LAB_004eff32
    MOV EBP,dword ptr [ECX]             ; 004efeb8
    IMUL EBP,EAX                        ; 004efeba
    MOV dword ptr [ESP + 0xc],EBP       ; 004efebd
    LEA EAX,[ESI + EBP*0x1]             ; 004efec1
    SHL EAX,0x2                         ; 004efec4
    MOV EBP,dword ptr [ECX + 0x24]      ; 004efec7
    ADD EAX,EBP                         ; 004efeca
    MOV dword ptr [ESP + 0x8],EBP       ; 004efecc
    MOVSX EAX,word ptr [EAX]            ; 004efed0
    IMUL EAX,dword ptr [ECX + 0x20]     ; 004efed3
    AND EDX,dword ptr [ECX + 0x8]       ; 004efed7
    ADD EDX,dword ptr [ESP + 0xc]       ; 004efeda
    MOV EBP,dword ptr [ESP + 0x8]       ; 004efede
    SHL EDX,0x2                         ; 004efee2
    ADD EDX,EBP                         ; 004efee5
    MOVSX EDX,word ptr [EDX]            ; 004efee7
    MOV EBP,dword ptr [ECX + 0x20]      ; 004efeea
    IMUL EBP,EDX                        ; 004efeed
    MOV EDX,dword ptr [ESP + 0x10]      ; 004efef0
    AND EDX,dword ptr [ECX + 0xc]       ; 004efef4
    IMUL EDX,dword ptr [ECX]            ; 004efef7
    ADD ESI,EDX                         ; 004efefa
    MOV EDX,dword ptr [ESP + 0x8]       ; 004efefc
    SHL ESI,0x2                         ; 004eff00
    ADD ESI,EDX                         ; 004eff03
    MOV ECX,dword ptr [ECX + 0x20]      ; 004eff05
    MOVSX ESI,word ptr [ESI]            ; 004eff08
    IMUL ECX,ESI                        ; 004eff0b
    MOV EDX,EAX                         ; 004eff0e
    SUB EDX,EBP                         ; 004eff10
    SUB ECX,EAX                         ; 004eff12
    MOV EAX,EDI                         ; 004eff14
    IMUL EDX                            ; 004eff16
    SHRD EAX,EDX,0x10                   ; 004eff18
    MOV EDX,ECX                         ; 004eff1c
    ADD EBP,EAX                         ; 004eff1e
    MOV EAX,EBX                         ; 004eff20
    IMUL EDX                            ; 004eff22
    SHRD EAX,EDX,0x10                   ; 004eff24
    ADD EAX,EBP                         ; 004eff28
    ADD ESP,0x14                        ; 004eff2a
    POP EBP                             ; 004eff2d
    POP EDI                             ; 004eff2e
    POP ESI                             ; 004eff2f
    POP EBX                             ; 004eff30
    RET                                 ; 004eff31
    MOV EBP,dword ptr [ECX + 0x8]       ; 004eff32
        ;   Label: LAB_004eff32
    AND EBP,EDX                         ; 004eff35
    IMUL EAX,dword ptr [ECX]            ; 004eff37
    ADD EAX,EBP                         ; 004eff3a
    LEA EDX,[EAX*0x4 + 0x0]             ; 004eff3c
    MOV EAX,dword ptr [ECX + 0x24]      ; 004eff43
    MOV dword ptr [ESP + 0x8],EBP       ; 004eff46
    MOV EBP,dword ptr [ECX + 0x20]      ; 004eff4a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004eff4d
    IMUL EBP,EDX                        ; 004eff51
    MOV EDX,dword ptr [ESP + 0x10]      ; 004eff54
    MOV dword ptr [ESP + 0x4],EBP       ; 004eff58
    AND EDX,dword ptr [ECX + 0xc]       ; 004eff5c
    MOV EBP,dword ptr [ECX]             ; 004eff5f
    IMUL EBP,EDX                        ; 004eff61
    MOV dword ptr [ESP + 0xc],EBP       ; 004eff64
    MOV EDX,EBP                         ; 004eff68
    ADD EDX,dword ptr [ESP + 0x8]       ; 004eff6a
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004eff6e
    MOV EBP,dword ptr [ECX + 0x20]      ; 004eff72
    IMUL EBP,EDX                        ; 004eff75
    ADD ESI,dword ptr [ESP + 0xc]       ; 004eff78
    MOVSX EAX,word ptr [EAX + ESI*0x4]  ; 004eff7c
    MOV EDX,EAX                         ; 004eff80
    IMUL EDX,dword ptr [ECX + 0x20]     ; 004eff82
    MOV EAX,dword ptr [ESP + 0x4]       ; 004eff86
    SUB EDX,EBP                         ; 004eff8a
    SUB EBP,EAX                         ; 004eff8c
    MOV EAX,EDI                         ; 004eff8e
    MOV ECX,dword ptr [ESP + 0x4]       ; 004eff90
    IMUL EDX                            ; 004eff94
    SHRD EAX,EDX,0x10                   ; 004eff96
    MOV EDX,EBP                         ; 004eff9a
    ADD ECX,EAX                         ; 004eff9c
    MOV EAX,EBX                         ; 004eff9e
    IMUL EDX                            ; 004effa0
    SHRD EAX,EDX,0x10                   ; 004effa2
    ADD EAX,ECX                         ; 004effa6
    ADD ESP,0x14                        ; 004effa8
    POP EBP                             ; 004effab
    POP EDI                             ; 004effac
    POP ESI                             ; 004effad
    POP EBX                             ; 004effae
    RET                                 ; 004effaf

