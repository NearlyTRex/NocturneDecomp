; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70(CDeformableModel *this_ptr,char *base_name,int num_crams,int atlas_dimension,int texture_set_index,int max_iterations)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   base_name
; int              Stack[0xc]:4   num_crams
; int              Stack[0x10]:4   atlas_dimension
; int              Stack[0x14]:4   texture_set_index
; int              Stack[0x18]:4   max_iterations
; Local Variables:
; SCram            Stack[-0x98]:116  local_98
; char *           Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c512
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
;   shape_design.c_cramTextureList_FUN_0046bb80
;   shape_design.c_cramTextures_FUN_0046a970
;   shape_design.c_initializeCram_FUN_0046b6e0
;   shape_design.c_initializeTextureManager_FUN_0046a880
;   shape_design.c_setTextureQualityParameter_FUN_0046a8e0
;
; *****************************************************************************

section .text

    PUSH 0xb0                           ; 0058de70
        ;   Label: core_skeledit.cpp_CDeformableModel_cramModelTexture_FUN_0058de70
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058de75
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058de7a
    PUSH ESI                            ; 0058de7b
    PUSH EDI                            ; 0058de7c
    PUSH EBP                            ; 0058de7d
    SUB ESP,0x88                        ; 0058de7e
    PUSH 0x1                            ; 0058de84
    CALL shape_design.c_initializeTextureManager_FUN_0046a880 ; 0058de86
        ;   XREF to: 0046a880 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
    ADD ESP,0x4                         ; 0058de8b
    PUSH 0x40                           ; 0058de8e
    CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0 ; 0058de90
        ;   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
    ADD ESP,0x4                         ; 0058de95
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058de98
    XOR EDX,EDX                         ; 0058de9f
    MOV ECX,dword ptr [EAX + 0xbc]      ; 0058dea1
    MOV dword ptr [ESP + 0x78],EDX      ; 0058dea7
    TEST ECX,ECX                        ; 0058deab
    JLE 0x0058e018                      ; 0058dead
        ;   XREF to: 0058e018 (CONDITIONAL_JUMP)  ; LAB_0058e018
    MOV EDX,dword ptr [ESP + 0xac]      ; 0058deb3
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058deba
    SUB EAX,EDX                         ; 0058dec1
    SHL EAX,0x7                         ; 0058dec3
    MOV EDX,EAX                         ; 0058dec6
    SHL EAX,0x4                         ; 0058dec8
    SUB EAX,EDX                         ; 0058decb
    MOV EDX,EAX                         ; 0058decd
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058decf
    ADD EAX,0xc0                        ; 0058ded6
    ADD EAX,EDX                         ; 0058dedb
    ADD EAX,0x8                         ; 0058dedd
    MOV dword ptr [ESP + 0x74],EAX      ; 0058dee0
    MOV ECX,0x7fffffff                  ; 0058dee4
        ;   Label: LAB_0058dee4
    MOV EBX,0x80000001                  ; 0058dee9
    XOR EBP,EBP                         ; 0058deee
    MOV ESI,ECX                         ; 0058def0
    MOV EDI,EBX                         ; 0058def2
    MOV dword ptr [ESP + 0x7c],EBP      ; 0058def4
    MOV dword ptr [ESP + 0x84],EBP      ; 0058def8
    MOV dword ptr [ESP + 0x80],EBP      ; 0058deff
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0058df06
        ;   Label: LAB_0058df06
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058df0d
    MOV EBP,dword ptr [EDX + 0x68]      ; 0058df14
    MOV EAX,dword ptr [EAX + 0x54]      ; 0058df17
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0058df1a
    ADD EAX,EBP                         ; 0058df1e
    CMP EAX,EDX                         ; 0058df20
    JLE 0x0058dfcb                      ; 0058df22
        ;   XREF to: 0058dfcb (CONDITIONAL_JUMP)  ; LAB_0058dfcb
    MOV EBP,dword ptr [ESP + 0x9c]      ; 0058df28
    MOV EAX,dword ptr [ESP + 0x80]      ; 0058df2f
    MOV EBP,dword ptr [EBP + 0x7c]      ; 0058df36
    ADD EBP,EAX                         ; 0058df39
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0058df3b
    MOV EDX,dword ptr [ESP + 0x84]      ; 0058df42
    MOV EAX,dword ptr [EAX + 0x90]      ; 0058df49
    ADD EAX,EDX                         ; 0058df4f
    MOV EDX,dword ptr [ESP + 0x78]      ; 0058df51
    CMP EDX,dword ptr [EAX]             ; 0058df55
    JZ 0x0058df8d                       ; 0058df57
        ;   XREF to: 0058df8d (CONDITIONAL_JUMP)  ; LAB_0058df8d
    MOV EAX,dword ptr [ESP + 0x80]      ; 0058df5d
        ;   Label: LAB_0058df5d
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0058df64
    MOV EBP,dword ptr [ESP + 0x84]      ; 0058df68
    ADD EAX,0x12                        ; 0058df6f
    INC EDX                             ; 0058df72
    ADD EBP,0x4                         ; 0058df73
    MOV dword ptr [ESP + 0x80],EAX      ; 0058df76
    MOV dword ptr [ESP + 0x7c],EDX      ; 0058df7d
    MOV dword ptr [ESP + 0x84],EBP      ; 0058df81
    JMP 0x0058df06                      ; 0058df88
        ;   XREF to: 0058df06 (UNCONDITIONAL_JUMP)  ; LAB_0058df06
    MOV EAX,EBP                         ; 0058df8d
        ;   Label: LAB_0058df8d
    ADD EBP,0x6                         ; 0058df8f
    XOR EDX,EDX                         ; 0058df92
        ;   Label: LAB_0058df92
    MOV DX,word ptr [EAX + 0x6]         ; 0058df94
    CMP EDX,ECX                         ; 0058df98
    JGE 0x0058df9e                      ; 0058df9a
        ;   XREF to: 0058df9e (CONDITIONAL_JUMP)  ; LAB_0058df9e
    MOV ECX,EDX                         ; 0058df9c
    XOR EDX,EDX                         ; 0058df9e
        ;   Label: LAB_0058df9e
    MOV DX,word ptr [EAX + 0x6]         ; 0058dfa0
    CMP EDX,EBX                         ; 0058dfa4
    JLE 0x0058dfaa                      ; 0058dfa6
        ;   XREF to: 0058dfaa (CONDITIONAL_JUMP)  ; LAB_0058dfaa
    MOV EBX,EDX                         ; 0058dfa8
    XOR EDX,EDX                         ; 0058dfaa
        ;   Label: LAB_0058dfaa
    MOV DX,word ptr [EAX + 0xc]         ; 0058dfac
    CMP EDX,ESI                         ; 0058dfb0
    JGE 0x0058dfb6                      ; 0058dfb2
        ;   XREF to: 0058dfb6 (CONDITIONAL_JUMP)  ; LAB_0058dfb6
    MOV ESI,EDX                         ; 0058dfb4
    XOR EDX,EDX                         ; 0058dfb6
        ;   Label: LAB_0058dfb6
    MOV DX,word ptr [EAX + 0xc]         ; 0058dfb8
    CMP EDX,EDI                         ; 0058dfbc
    JLE 0x0058dfc2                      ; 0058dfbe
        ;   XREF to: 0058dfc2 (CONDITIONAL_JUMP)  ; LAB_0058dfc2
    MOV EDI,EDX                         ; 0058dfc0
    ADD EAX,0x2                         ; 0058dfc2
        ;   Label: LAB_0058dfc2
    CMP EAX,EBP                         ; 0058dfc5
    JZ 0x0058df5d                       ; 0058dfc7
        ;   XREF to: 0058df5d (CONDITIONAL_JUMP)  ; LAB_0058df5d
    JMP 0x0058df92                      ; 0058dfc9
        ;   XREF to: 0058df92 (UNCONDITIONAL_JUMP)  ; LAB_0058df92
    CMP ECX,EBX                         ; 0058dfcb
        ;   Label: LAB_0058dfcb
    JG 0x0058dfef                       ; 0058dfcd
        ;   XREF to: 0058dfef (CONDITIONAL_JUMP)  ; LAB_0058dfef
    SHL EDI,0x8                         ; 0058dfcf
    PUSH EDI                            ; 0058dfd2
    SHL EBX,0x8                         ; 0058dfd3
    PUSH EBX                            ; 0058dfd6
    SHL ESI,0x8                         ; 0058dfd7
    PUSH ESI                            ; 0058dfda
    SHL ECX,0x8                         ; 0058dfdb
    PUSH ECX                            ; 0058dfde
    MOV ECX,dword ptr [ESP + 0x84]      ; 0058dfdf
    PUSH ECX                            ; 0058dfe6
    CALL shape_design.c_cramTextures_FUN_0046a970 ; 0058dfe7
        ;   XREF to: 0046a970 (UNCONDITIONAL_CALL)  ; void shape_design.c_cramTextures_FUN_0046a970(char * texture_filename, int min_u, int min_v, int max_u, ...)
    ADD ESP,0x14                        ; 0058dfec
    MOV EBX,dword ptr [ESP + 0x74]      ; 0058dfef
        ;   Label: LAB_0058dfef
    MOV ESI,dword ptr [ESP + 0x78]      ; 0058dff3
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0058dff7
    ADD EBX,0x48                        ; 0058dffe
    INC ESI                             ; 0058e001
    MOV EDI,dword ptr [EDX + 0xbc]      ; 0058e002
    MOV dword ptr [ESP + 0x74],EBX      ; 0058e008
    MOV dword ptr [ESP + 0x78],ESI      ; 0058e00c
    CMP ESI,EDI                         ; 0058e010
    JL 0x0058dee4                       ; 0058e012
        ;   XREF to: 0058dee4 (CONDITIONAL_JUMP)  ; LAB_0058dee4
    MOV EAX,ESP                         ; 0058e018
        ;   Label: LAB_0058e018
    PUSH EAX                            ; 0058e01a
    LEA EDI,[ESP + 0x4]                 ; 0058e01b
    CALL shape_design.c_initializeCram_FUN_0046b6e0 ; 0058e01f
        ;   XREF to: 0046b6e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeCram_FUN_0046b6e0(SCram * cram)
    ADD ESP,0x4                         ; 0058e024
    MOV EBX,0x1                         ; 0058e027
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0058e02c
    MOV ECX,0x5f                        ; 0058e033
    PUSH EDI                            ; 0058e038
    MOV AL,byte ptr [ESI]               ; 0058e039
        ;   Label: LAB_0058e039
    MOV byte ptr [EDI],AL               ; 0058e03b
    CMP AL,0x0                          ; 0058e03d
    JZ 0x0058e051                       ; 0058e03f
        ;   XREF to: 0058e051 (CONDITIONAL_JUMP)  ; LAB_0058e051
    MOV AL,byte ptr [ESI + 0x1]         ; 0058e041
    ADD ESI,0x2                         ; 0058e044
    MOV byte ptr [EDI + 0x1],AL         ; 0058e047
    ADD EDI,0x2                         ; 0058e04a
    CMP AL,0x0                          ; 0058e04d
    JNZ 0x0058e039                      ; 0058e04f
        ;   XREF to: 0058e039 (CONDITIONAL_JUMP)  ; LAB_0058e039
    POP EDI                             ; 0058e051
        ;   Label: LAB_0058e051
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0058e052
    MOV ESI,0x2                         ; 0058e059
    MOV dword ptr [ESP + 0x58],ECX      ; 0058e05e
    MOV dword ptr [ESP + 0x50],EAX      ; 0058e062
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0058e066
    MOV dword ptr [ESP + 0x5c],EBX      ; 0058e06d
    MOV dword ptr [ESP + 0x60],EAX      ; 0058e071
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0058e075
    MOV dword ptr [ESP + 0x6c],EBX      ; 0058e07c
    MOV dword ptr [ESP + 0x70],EAX      ; 0058e080
    MOV EAX,ESP                         ; 0058e084
    MOV dword ptr [ESP + 0x64],EBX      ; 0058e086
    PUSH EAX                            ; 0058e08a
    MOV dword ptr [ESP + 0x6c],EBX      ; 0058e08b
    MOV dword ptr [ESP + 0x58],ESI      ; 0058e08f
    CALL shape_design.c_cramTextureList_FUN_0046bb80 ; 0058e093
        ;   XREF to: 0046bb80 (UNCONDITIONAL_CALL)  ; int shape_design.c_cramTextureList_FUN_0046bb80(SCram * cram)
    ADD ESP,0x4                         ; 0058e098
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0058e09b
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    ADD ESP,0x88                        ; 0058e0a0
    POP EBP                             ; 0058e0a6
    POP EDI                             ; 0058e0a7
    POP ESI                             ; 0058e0a8
    POP EBX                             ; 0058e0a9
    RET                                 ; 0058e0aa

