; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; SInputFace *     Stack[0xc]:4   face_data
; STextureSet *    Stack[0x10]:4   texture_sets
; int *            Stack[0x14]:4   index_data
; int              Stack[0x18]:4   start_face
; int              Stack[0x1c]:4   face_count
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; SInputFace *     Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_0052a710 at 0052a85d
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0063a325
;   TerminatedCString s_CMorphModel_setFaceList__0063a337
;   TerminatedCString s_core_morph_cpp_0063a365
;   TerminatedCString s_CMorphModel_setFaceList__0063a377
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int INT_02f43974
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052aca0
        ;   Label: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0
    PUSH ESI                            ; 0052aca1
    PUSH EDI                            ; 0052aca2
    PUSH EBP                            ; 0052aca3
    SUB ESP,0x18                        ; 0052aca4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052aca7
    MOV ESI,dword ptr [ESP + 0x30]      ; 0052acab
    MOV EDI,dword ptr [ESP + 0x40]      ; 0052acaf
    TEST ESI,ESI                        ; 0052acb3
    JL 0x0052acbb                       ; 0052acb5
        ;   XREF to: 0052acbb (CONDITIONAL_JUMP)  ; LAB_0052acbb
    CMP ESI,dword ptr [EBX]             ; 0052acb7
    JL 0x0052acde                       ; 0052acb9
        ;   XREF to: 0052acde (CONDITIONAL_JUMP)  ; LAB_0052acde
    MOV ECX,0x63a325                    ; 0052acbb | = "..\\core\\morph.cpp"
        ;   Label: LAB_0052acbb
    MOV EBP,0x191                       ; 0052acc0
    PUSH 0x63a337                       ; 0052acc5 | = "CMorphModel::setFaceList - invalid pa..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0052acca | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0052acd0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052acd6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052acdb
    MOV EAX,ESI                         ; 0052acde
        ;   Label: LAB_0052acde
    SHL EAX,0x4                         ; 0052ace0
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 0052ace3
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0052ace7
    MOV EAX,dword ptr [ESP + 0x44]      ; 0052aceb
    ADD EDI,EDX                         ; 0052acef
    ADD EDX,ECX                         ; 0052acf1
    ADD EAX,EDI                         ; 0052acf3
    CMP EAX,EDX                         ; 0052acf5
    JLE 0x0052ad1b                      ; 0052acf7
        ;   XREF to: 0052ad1b (CONDITIONAL_JUMP)  ; LAB_0052ad1b
    MOV EBP,0x63a365                    ; 0052acf9 | = "..\\core\\morph.cpp"
    MOV EAX,0x198                       ; 0052acfe
    PUSH 0x63a377                       ; 0052ad03 | = "CMorphModel::setFaceList - invalid ve..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0052ad08 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052ad0e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052ad13
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052ad18
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052ad1b
        ;   Label: LAB_0052ad1b
    XOR EDX,EDX                         ; 0052ad1f
    MOV ECX,dword ptr [ESP + 0x44]      ; 0052ad21
    MOV dword ptr [ESP + 0xc],EDX       ; 0052ad25
    MOV dword ptr [ESP + 0x4],EAX       ; 0052ad29
    TEST ECX,ECX                        ; 0052ad2d
    JLE 0x0052ae50                      ; 0052ad2f
        ;   XREF to: 0052ae50 (CONDITIONAL_JUMP)  ; LAB_0052ae50
    SHL ESI,0x4                         ; 0052ad35
    LEA EAX,[EBX + ESI*0x1]             ; 0052ad38
    MOV dword ptr [ESP + 0x10],EAX      ; 0052ad3b
    LEA EAX,[EDI*0x4 + 0x0]             ; 0052ad3f
    MOV EDX,EAX                         ; 0052ad46
    SHL EAX,0x4                         ; 0052ad48
    SUB EAX,EDX                         ; 0052ad4b
    MOV dword ptr [ESP + 0x14],EAX      ; 0052ad4d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0052ad51
    MOV dword ptr [ESP + 0x8],EAX       ; 0052ad55
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052ad59
        ;   Label: LAB_0052ad59
    IMUL EAX,dword ptr [EAX],0x48       ; 0052ad5d
    ADD EAX,dword ptr [ESP + 0x38]      ; 0052ad60
    ADD EAX,0x8                         ; 0052ad64
    PUSH EAX                            ; 0052ad67
    PUSH EBX                            ; 0052ad68
    CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60 ; 0052ad69
        ;   XREF to: 0052ae60 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0052ad6e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052ad71
    MOV dword ptr [ESP],EAX             ; 0052ad75
    MOV EAX,dword ptr [EBX + 0x60]      ; 0052ad78
    ADD EAX,EDI                         ; 0052ad7b
    XOR EDX,EDX                         ; 0052ad7d
    MOV ESI,EDI                         ; 0052ad7f
    MOV dword ptr [EAX + 0x4],0x3       ; 0052ad81
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052ad88
    CMP dword ptr [0x02f43974],0x0      ; 0052ad8c | INT_02f43974
        ;   Label: LAB_0052ad8c
    JZ 0x0052ae58                       ; 0052ad93
        ;   XREF to: 0052ae58 (CONDITIONAL_JUMP)  ; LAB_0052ae58
    MOV ECX,0x2                         ; 0052ad99
    SUB ECX,EDX                         ; 0052ad9e
    IMUL ECX,ECX,0xc                    ; 0052ada0
        ;   Label: LAB_0052ada0
    MOV EDI,dword ptr [EBX + 0x60]      ; 0052ada3
    ADD EDI,ESI                         ; 0052ada6
    MOVZX EBP,word ptr [EAX]            ; 0052ada8
    MOV dword ptr [ECX + EDI*0x1 + 0x18],EBP ; 0052adab
    ADD EAX,0x2                         ; 0052adaf
    MOV EDI,dword ptr [EBX + 0x60]      ; 0052adb2
    MOVZX EBP,word ptr [EAX + 0x4]      ; 0052adb5
    ADD EDI,ESI                         ; 0052adb9
    SHL EBP,0x8                         ; 0052adbb
    INC EDX                             ; 0052adbe
    MOV dword ptr [ECX + EDI*0x1 + 0x1c],EBP ; 0052adbf
    MOV EBP,dword ptr [EBX + 0x60]      ; 0052adc3
    XOR EDI,EDI                         ; 0052adc6
    ADD EBP,ESI                         ; 0052adc8
    MOV DI,word ptr [EAX + 0xa]         ; 0052adca
    ADD ECX,EBP                         ; 0052adce
    SHL EDI,0x8                         ; 0052add0
    MOV dword ptr [ECX + 0x20],EDI      ; 0052add3
    CMP EDX,0x3                         ; 0052add6
    JL 0x0052ad8c                       ; 0052add9
        ;   XREF to: 0052ad8c (CONDITIONAL_JUMP)  ; LAB_0052ad8c
    MOV EAX,dword ptr [EBX + 0x60]      ; 0052addb
    MOV EDX,dword ptr [ESP]             ; 0052adde
    MOV dword ptr [ESI + EAX*0x1],EDX   ; 0052ade1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052ade4
    MOV EAX,dword ptr [EBX + 0x60]      ; 0052ade8
    MOV EDX,dword ptr [EDX + 0xc]       ; 0052adeb
    ADD dword ptr [ESI + EAX*0x1 + 0x18],EDX ; 0052adee
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052adf2
    MOV EAX,dword ptr [EBX + 0x60]      ; 0052adf6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052adf9
    MOV EDX,dword ptr [EDX + 0xc]       ; 0052adfd
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x24] ; 0052ae00
    ADD ECX,0x3c                        ; 0052ae04
    ADD EBP,EDX                         ; 0052ae07
    MOV dword ptr [ESP + 0x14],ECX      ; 0052ae09
    MOV dword ptr [ESI + EAX*0x1 + 0x24],EBP ; 0052ae0d
    MOV EDI,dword ptr [ESP + 0x8]       ; 0052ae11
    MOV EAX,dword ptr [EBX + 0x60]      ; 0052ae15
    ADD EDI,0x4                         ; 0052ae18
    ADD ESI,EAX                         ; 0052ae1b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ae1d
    MOV dword ptr [ESP + 0x8],EDI       ; 0052ae21
    MOV EDX,dword ptr [ESI + 0x30]      ; 0052ae25
    MOV EAX,dword ptr [EAX + 0xc]       ; 0052ae28
    MOV EBP,dword ptr [ESP + 0xc]       ; 0052ae2b
    ADD EDX,EAX                         ; 0052ae2f
    INC EBP                             ; 0052ae31
    MOV dword ptr [ESI + 0x30],EDX      ; 0052ae32
    MOV ESI,dword ptr [ESP + 0x4]       ; 0052ae35
    MOV dword ptr [ESP + 0xc],EBP       ; 0052ae39
    ADD ESI,0x12                        ; 0052ae3d
    MOV EDX,dword ptr [ESP + 0x44]      ; 0052ae40
    MOV dword ptr [ESP + 0x4],ESI       ; 0052ae44
    CMP EBP,EDX                         ; 0052ae48
    JL 0x0052ad59                       ; 0052ae4a
        ;   XREF to: 0052ad59 (CONDITIONAL_JUMP)  ; LAB_0052ad59
    ADD ESP,0x18                        ; 0052ae50
        ;   Label: LAB_0052ae50
    POP EBP                             ; 0052ae53
    POP EDI                             ; 0052ae54
    POP ESI                             ; 0052ae55
    POP EBX                             ; 0052ae56
    RET                                 ; 0052ae57
    MOV ECX,EDX                         ; 0052ae58
        ;   Label: LAB_0052ae58
    JMP 0x0052ada0                      ; 0052ae5a
        ;   XREF to: 0052ada0 (UNCONDITIONAL_JUMP)  ; LAB_0052ada0

