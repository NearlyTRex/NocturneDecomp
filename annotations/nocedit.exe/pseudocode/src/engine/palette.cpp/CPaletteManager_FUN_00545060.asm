; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_palette.cpp_CPaletteManager_FUN_00545060(CPaletteManager * this_ptr, SMRGLHeaderExtended * unk)
;
; Parameters:
; CPaletteManager * Stack[0x4]:4   this_ptr
; SMRGLHeaderExtended * Stack[0x8]:4   unk
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_getMRGLSize_FUN_00528700
;   engine_model.c_loadModelFile_FUN_00527ec0
;   engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545060
        ;   Label: engine_palette.cpp_CPaletteManager_FUN_00545060
    PUSH ESI                            ; 00545061
    PUSH EDI                            ; 00545062
    PUSH EBP                            ; 00545063
    SUB ESP,0x8                         ; 00545064
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00545067
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054506b
    MOV EDX,dword ptr [EBX]             ; 0054506f
    MOV dword ptr [ESP + 0x4],EBX       ; 00545071
    CMP EDX,0x20                        ; 00545075
    JZ 0x005450f8                       ; 00545078
        ;   XREF to: 005450f8 (CONDITIONAL_JUMP)  ; LAB_005450f8
    CMP EDX,0x26                        ; 0054507e
    JZ 0x00545148                       ; 00545081
        ;   XREF to: 00545148 (CONDITIONAL_JUMP)  ; LAB_00545148
    MOV EAX,dword ptr [ESP + 0x4]       ; 00545087
        ;   Label: LAB_00545087
    MOV ESI,dword ptr [EAX]             ; 0054508b
    TEST ESI,ESI                        ; 0054508d
    JZ 0x00545140                       ; 0054508f
        ;   XREF to: 00545140 (CONDITIONAL_JUMP)  ; LAB_00545140
    CMP ESI,0xd                         ; 00545095
    JZ 0x0054509f                       ; 00545098
        ;   XREF to: 0054509f (CONDITIONAL_JUMP)  ; LAB_0054509f
    CMP ESI,0x40                        ; 0054509a
    JNZ 0x005450b0                      ; 0054509d
        ;   XREF to: 005450b0 (CONDITIONAL_JUMP)  ; LAB_005450b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054509f
        ;   Label: LAB_0054509f
    ADD EAX,0x8                         ; 005450a3
    PUSH EAX                            ; 005450a6
    PUSH EDI                            ; 005450a7
    CALL engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0 ; 005450a8
        ;   XREF to: 00544fc0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0()
    ADD ESP,0x8                         ; 005450ad
    MOV EAX,dword ptr [ESP + 0x4]       ; 005450b0
        ;   Label: LAB_005450b0
    CMP dword ptr [EAX],0x1d            ; 005450b4
    JNZ 0x005450dc                      ; 005450b7
        ;   XREF to: 005450dc (CONDITIONAL_JUMP)  ; LAB_005450dc
    MOV EBP,EAX                         ; 005450b9
    MOV EDX,dword ptr [EAX + 0x8]       ; 005450bb
    XOR EBX,EBX                         ; 005450be
    LEA ESI,[EAX + 0x1c]                ; 005450c0
    TEST EDX,EDX                        ; 005450c3
    JLE 0x005450dc                      ; 005450c5
        ;   XREF to: 005450dc (CONDITIONAL_JUMP)  ; LAB_005450dc
    PUSH ESI                            ; 005450c7
        ;   Label: LAB_005450c7
    PUSH EDI                            ; 005450c8
    INC EBX                             ; 005450c9
    CALL engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0 ; 005450ca
        ;   XREF to: 00544fc0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0()
    ADD ESI,0x20                        ; 005450cf
    MOV ECX,dword ptr [EBP + 0x8]       ; 005450d2
    ADD ESP,0x8                         ; 005450d5
    CMP EBX,ECX                         ; 005450d8
    JL 0x005450c7                       ; 005450da
        ;   XREF to: 005450c7 (CONDITIONAL_JUMP)  ; LAB_005450c7
    MOV EBX,dword ptr [ESP + 0x4]       ; 005450dc
        ;   Label: LAB_005450dc
    PUSH EBX                            ; 005450e0
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 005450e1
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 005450e6
    SHL EAX,0x2                         ; 005450e9
    ADD ESP,0x4                         ; 005450ec
    LEA ESI,[EBX + EAX*0x1]             ; 005450ef
    MOV dword ptr [ESP + 0x4],ESI       ; 005450f2
    JMP 0x00545087                      ; 005450f6
        ;   XREF to: 00545087 (UNCONDITIONAL_JUMP)  ; LAB_00545087
    MOV dword ptr [ESP],EBX             ; 005450f8
        ;   Label: LAB_005450f8
    MOV EDX,dword ptr [EBX + 0x8]       ; 005450fb
    XOR ESI,ESI                         ; 005450fe
    TEST EDX,EDX                        ; 00545100
    JLE 0x00545140                      ; 00545102
        ;   XREF to: 00545140 (CONDITIONAL_JUMP)  ; LAB_00545140
    LEA EBP,[EBX + 0x18]                ; 00545104
    PUSH EBP                            ; 00545107
        ;   Label: LAB_00545107
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 00545108
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 0054510d
    PUSH EAX                            ; 00545110
    PUSH EDI                            ; 00545111
    MOV EBX,EAX                         ; 00545112
    CALL engine_palette.cpp_CPaletteManager_FUN_00545060 ; 00545114
        ;   XREF to: 00545060 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_palette.cpp_CPaletteManager_FUN_00545060(CPaletteManager * this_ptr, SMRGLHeaderExtended * unk)
    ADD ESP,0x8                         ; 00545119
    PUSH EBX                            ; 0054511c
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 0054511d
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * modelStruct)
    ADD ESP,0x4                         ; 00545122
    MOV EAX,dword ptr [ESP]             ; 00545125
    INC ESI                             ; 00545128
    MOV EBX,dword ptr [EAX + 0x8]       ; 00545129
    ADD EBP,0x10                        ; 0054512c
    CMP ESI,EBX                         ; 0054512f
    JL 0x00545107                       ; 00545131
        ;   XREF to: 00545107 (CONDITIONAL_JUMP)  ; LAB_00545107
    LEA EAX,[EAX]                       ; 00545133
    LEA EDX,[EDX]                       ; 00545139
    NOP                                 ; 0054513f
    ADD ESP,0x8                         ; 00545140
        ;   Label: LAB_00545140
    POP EBP                             ; 00545143
    POP EDI                             ; 00545144
    POP ESI                             ; 00545145
    POP EBX                             ; 00545146
    RET                                 ; 00545147
    MOV EBP,EBX                         ; 00545148
        ;   Label: LAB_00545148
    MOV EAX,dword ptr [EBX + 0x18]      ; 0054514a
    XOR ESI,ESI                         ; 0054514d
    TEST EAX,EAX                        ; 0054514f
    JLE 0x00545140                      ; 00545151
        ;   XREF to: 00545140 (CONDITIONAL_JUMP)  ; LAB_00545140
    ADD EBX,0x24                        ; 00545153
    PUSH EBX                            ; 00545156
        ;   Label: LAB_00545156
    PUSH EDI                            ; 00545157
    INC ESI                             ; 00545158
    CALL engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0 ; 00545159
        ;   XREF to: 00544fc0 (UNCONDITIONAL_CALL)  ; undefined engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0()
    ADD EBX,0x18                        ; 0054515e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00545161
    ADD ESP,0x8                         ; 00545164
    CMP ESI,ECX                         ; 00545167
    JL 0x00545156                       ; 00545169
        ;   XREF to: 00545156 (CONDITIONAL_JUMP)  ; LAB_00545156
    ADD ESP,0x8                         ; 0054516b
    POP EBP                             ; 0054516e
    POP EDI                             ; 0054516f
    POP ESI                             ; 00545170
    POP EBX                             ; 00545171
    RET                                 ; 00545172

