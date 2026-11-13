; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0054ac50(CDeformableModel *this_ptr,int lod_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3i *skinned_vertices,byte *part_visibility_flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3f *      Stack[0xc]:4   ray_origin
; CVector3f *      Stack[0x10]:4   ray_direction
; CVector3i *      Stack[0x14]:4   skinned_vertices
; byte *           Stack[0x18]:4   part_visibility_flags
; Local Variables:
; undefined8       Stack[-0x90]:8  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0054f400 at 0054f448
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1e90
;   TerminatedCString s_CDeformableModel_exactRa_005d1ea5
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005e4760
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_0271383c
;   undefined4 DAT_02713840
;   undefined4 DAT_02713844
;   undefined4 DAT_02713848
;   undefined4 DAT_0271384c
;   undefined4 DAT_02713850
;   undefined4 DAT_0272229c
;   undefined4 DAT_0272af44
;   undefined4 DAT_0272af48
;   ... and 4 more
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;   core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0
;   core_main.c_FUN_004e4330
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ac50
        ;   Label: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0054ac50
    PUSH ESI                            ; 0054ac51
    PUSH EDI                            ; 0054ac52
    PUSH EBP                            ; 0054ac53
    MOV EBP,ESP                         ; 0054ac54
    SUB ESP,0x7c                        ; 0054ac56
    AND ESP,0xfffffff8                  ; 0054ac59
    MOV AH,byte ptr [0x0272229c]        ; 0054ac5c | DAT_0272229c
    TEST AH,0x1                         ; 0054ac62
    JZ 0x0054aedf                       ; 0054ac65
        ;   XREF to: 0054aedf (CONDITIONAL_JUMP)  ; LAB_0054aedf
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054ac6b
        ;   Label: LAB_0054ac6b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054ac6e
    SHL EAX,0x2                         ; 0054ac71
    ADD EAX,EDX                         ; 0054ac74
    CMP dword ptr [EAX + 0x2c],0x1388   ; 0054ac76
    JLE 0x0054aca2                      ; 0054ac7d
        ;   XREF to: 0054aca2 (CONDITIONAL_JUMP)  ; LAB_0054aca2
    MOV EBX,0x5d1e90                    ; 0054ac7f | = "..\\core\\skeleton.cpp"
    MOV ESI,0x6e2                       ; 0054ac84
    PUSH 0x5d1ea5                       ; 0054ac89 | = "CDeformableModel::exactRayTrace - too..."
    MOV dword ptr [0x01d71de0],EBX      ; 0054ac8e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0054ac94 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0054ac9a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0054ac9f
    MOV EDI,dword ptr [EBP + 0x18]      ; 0054aca2
        ;   Label: LAB_0054aca2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0054aca5
    SHL EDI,0x2                         ; 0054aca8
    ADD EDI,EAX                         ; 0054acab
    MOV EDX,0x271383c                   ; 0054acad
    MOV ECX,dword ptr [EBP + 0x24]      ; 0054acb2
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0054acb5
    XOR ESI,ESI                         ; 0054acb8
    TEST EBX,EBX                        ; 0054acba
    JLE 0x0054ad00                      ; 0054acbc
        ;   XREF to: 0054ad00 (CONDITIONAL_JUMP)  ; LAB_0054ad00
    MOV EAX,ECX                         ; 0054acbe
        ;   Label: LAB_0054acbe
    MOV EBX,EDX                         ; 0054acc0
    FILD dword ptr [EAX]                ; 0054acc2
    FMUL float ptr [0x005e4760]         ; 0054acc4 | DAT_005e4760
    FSTP float ptr [EBX]                ; 0054acca | DAT_0271383c | DAT_02713848
    FILD dword ptr [EAX + 0x4]          ; 0054accc
    FMUL float ptr [0x005e4760]         ; 0054accf | DAT_005e4760
    FSTP float ptr [EBX + 0x4]          ; 0054acd5 | DAT_02713840 | DAT_0271384c
    FILD dword ptr [EAX + 0x8]          ; 0054acd8
    FMUL float ptr [0x005e4760]         ; 0054acdb | DAT_005e4760
    FSTP float ptr [EBX + 0x8]          ; 0054ace1 | DAT_02713844 | DAT_02713850
    INC ESI                             ; 0054ace4
    ADD EDX,0xc                         ; 0054ace5
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0054ace8
    ADD ECX,0xc                         ; 0054aceb
    CMP ESI,EAX                         ; 0054acee
    JL 0x0054acbe                       ; 0054acf0
        ;   XREF to: 0054acbe (CONDITIONAL_JUMP)  ; LAB_0054acbe
    LEA EAX,[EAX]                       ; 0054acf2
    LEA EDX,[EDX]                       ; 0054acf8
    MOV EAX,EAX                         ; 0054acfe
    MOV dword ptr [ESP + 0x70],0x3f8147ae ; 0054ad00
        ;   Label: LAB_0054ad00
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054ad08
    XOR EAX,EAX                         ; 0054ad0b
    MOV EBX,dword ptr [EDX + 0xc00]     ; 0054ad0d
    MOV dword ptr [ESP + 0x6c],EAX      ; 0054ad13
    TEST EBX,EBX                        ; 0054ad17
    JLE 0x0054aed4                      ; 0054ad19
        ;   XREF to: 0054aed4 (CONDITIONAL_JUMP)  ; LAB_0054aed4
    MOV EDX,dword ptr [EBP + 0x18]      ; 0054ad1f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054ad22
    SHL EDX,0x2                         ; 0054ad25
    ADD ECX,EDX                         ; 0054ad28
    MOV ESI,dword ptr [EBP + 0x14]      ; 0054ad2a
    MOV dword ptr [ESP + 0x64],ECX      ; 0054ad2d
    ADD EDX,ESI                         ; 0054ad31
    MOV ECX,dword ptr [EBP + 0x28]      ; 0054ad33
    MOV dword ptr [ESP + 0x5c],EDX      ; 0054ad36
    MOV dword ptr [ESP + 0x60],ECX      ; 0054ad3a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0054ad3e
        ;   Label: LAB_0054ad3e
    MOV EDX,dword ptr [EDX + 0xc24]     ; 0054ad42
    ADD EDX,EAX                         ; 0054ad48
    MOV dword ptr [ESP + 0x68],EDX      ; 0054ad4a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0054ad4e
    TEST byte ptr [EDX],0x1             ; 0054ad52
    JZ 0x0054aea0                       ; 0054ad55
        ;   XREF to: 0054aea0 (CONDITIONAL_JUMP)  ; LAB_0054aea0
    MOV EDI,dword ptr [ESP + 0x68]      ; 0054ad5b
    MOV EBX,EAX                         ; 0054ad5f
    CMP EAX,EDI                         ; 0054ad61
    JGE 0x0054aea0                      ; 0054ad63
        ;   XREF to: 0054aea0 (CONDITIONAL_JUMP)  ; LAB_0054aea0
    IMUL EAX,EAX,0x12                   ; 0054ad69
    MOV dword ptr [ESP + 0x74],EAX      ; 0054ad6c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0054ad70
        ;   Label: LAB_0054ad70
    MOV ECX,dword ptr [ESP + 0x74]      ; 0054ad74
    MOV EAX,dword ptr [EAX + 0x7c]      ; 0054ad78
    ADD EAX,ECX                         ; 0054ad7b
    XOR EDX,EDX                         ; 0054ad7d
    MOV DX,word ptr [EAX + 0x4]         ; 0054ad7f
    IMUL EDX,EDX,0xc                    ; 0054ad83
    ADD EDX,0x271383c                   ; 0054ad86
    PUSH EDX                            ; 0054ad8c
    XOR EDX,EDX                         ; 0054ad8d
    MOV DX,word ptr [EAX + 0x2]         ; 0054ad8f
    IMUL EDX,EDX,0xc                    ; 0054ad93
    ADD EDX,0x271383c                   ; 0054ad96
    MOV AX,word ptr [EAX]               ; 0054ad9c
    PUSH EDX                            ; 0054ad9f
    AND EAX,0xffff                      ; 0054ada0
    IMUL EAX,EAX,0xc                    ; 0054ada5
    ADD EAX,0x271383c                   ; 0054ada8
    PUSH EAX                            ; 0054adad
    LEA EAX,[ESP + 0x18]                ; 0054adae
    PUSH EAX                            ; 0054adb2
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 0054adb3
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0054adb8
    MOV ESI,dword ptr [EBP + 0x20]      ; 0054adbb
    PUSH ESI                            ; 0054adbe
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0054adbf
    PUSH EDI                            ; 0054adc2
    LEA EAX,[ESP + 0x14]                ; 0054adc3
    PUSH EAX                            ; 0054adc7
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0 ; 0054adc8
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x84],EAX      ; 0054adcd
    FLD float ptr [ESP + 0x84]          ; 0054add4
    ADD ESP,0xc                         ; 0054addb
    FST float ptr [ESP + 0x8]           ; 0054adde
    FCOMP float ptr [ESP + 0x70]        ; 0054ade2
    FNSTSW AX                           ; 0054ade6
    SAHF                                ; 0054ade8
    JNC 0x0054ae88                      ; 0054ade9
        ;   XREF to: 0054ae88 (CONDITIONAL_JUMP)  ; LAB_0054ae88
    FLD float ptr [ESP + 0x8]           ; 0054adef
    FLDZ                                ; 0054adf3
    FXCH                                ; 0054adf5
    FSTP double ptr [ESP]               ; 0054adf7
    FCOMP double ptr [ESP]              ; 0054adfa
    FNSTSW AX                           ; 0054adfd
    SAHF                                ; 0054adff
    JA 0x0054ae88                       ; 0054ae00
        ;   XREF to: 0054ae88 (CONDITIONAL_JUMP)  ; LAB_0054ae88
    FLD1                                ; 0054ae06
    FCOMP double ptr [ESP]              ; 0054ae08
    FNSTSW AX                           ; 0054ae0b
    SAHF                                ; 0054ae0d
    JC 0x0054ae88                       ; 0054ae0e
        ;   XREF to: 0054ae88 (CONDITIONAL_JUMP)  ; LAB_0054ae88
    FLD float ptr [ESP + 0x30]          ; 0054ae10
    FLD float ptr [ESP + 0x34]          ; 0054ae14
    FLD float ptr [ESP + 0x38]          ; 0054ae18
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054ae1c
    LEA EDI,[ESP + 0x50]                ; 0054ae20
    LEA ESI,[ESP + 0x44]                ; 0054ae24
    FXCH ST2                            ; 0054ae28
    FCHS                                ; 0054ae2a
    FXCH                                ; 0054ae2c
    FCHS                                ; 0054ae2e
    FXCH ST2                            ; 0054ae30
    FCHS                                ; 0054ae32
    FXCH                                ; 0054ae34
    FSTP float ptr [ESP + 0x44]         ; 0054ae36
    FXCH                                ; 0054ae3a
    FSTP float ptr [ESP + 0x48]         ; 0054ae3c
    FSTP float ptr [ESP + 0x4c]         ; 0054ae40
    MOV dword ptr [ESP + 0x70],EAX      ; 0054ae44
    LEA EAX,[ESP + 0x50]                ; 0054ae48
    MOVSD ES:EDI,ESI                    ; 0054ae4c
    MOVSD ES:EDI,ESI                    ; 0054ae4d
    MOVSD ES:EDI,ESI                    ; 0054ae4e
    CMP EAX,0x272af48                   ; 0054ae4f
    JZ 0x0054ae71                       ; 0054ae54
        ;   XREF to: 0054ae71 (CONDITIONAL_JUMP)  ; LAB_0054ae71
    MOV EAX,dword ptr [ESP + 0x50]      ; 0054ae56
    MOV [0x0272af48],EAX                ; 0054ae5a | DAT_0272af48
    MOV EAX,dword ptr [ESP + 0x54]      ; 0054ae5f
    MOV [0x0272af4c],EAX                ; 0054ae63 | DAT_0272af4c
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054ae68
    MOV [0x0272af50],EAX                ; 0054ae6c | DAT_0272af50
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0054ae71
        ;   Label: LAB_0054ae71
    MOV [0x0272af44],EAX                ; 0054ae75 | DAT_0272af44
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054ae7a
    MOV dword ptr [0x0272af58],EBX      ; 0054ae7d | DAT_0272af58
    MOV [0x0272af54],EAX                ; 0054ae83 | DAT_0272af54
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054ae88
        ;   Label: LAB_0054ae88
    MOV EDX,dword ptr [ESP + 0x68]      ; 0054ae8c
    ADD EAX,0x12                        ; 0054ae90
    INC EBX                             ; 0054ae93
    MOV dword ptr [ESP + 0x74],EAX      ; 0054ae94
    CMP EBX,EDX                         ; 0054ae98
    JL 0x0054ad70                       ; 0054ae9a
        ;   XREF to: 0054ad70 (CONDITIONAL_JUMP)  ; LAB_0054ad70
    MOV EAX,dword ptr [ESP + 0x68]      ; 0054aea0
        ;   Label: LAB_0054aea0
    MOV ESI,dword ptr [ESP + 0x60]      ; 0054aea4
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0054aea8
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0054aeac
    MOV ECX,dword ptr [EBP + 0x14]      ; 0054aeb0
    ADD ESI,0x4                         ; 0054aeb3
    ADD EDI,0x60                        ; 0054aeb6
    INC EDX                             ; 0054aeb9
    MOV EBX,dword ptr [ECX + 0xc00]     ; 0054aeba
    MOV dword ptr [ESP + 0x60],ESI      ; 0054aec0
    MOV dword ptr [ESP + 0x5c],EDI      ; 0054aec4
    MOV dword ptr [ESP + 0x6c],EDX      ; 0054aec8
    CMP EDX,EBX                         ; 0054aecc
    JL 0x0054ad3e                       ; 0054aece
        ;   XREF to: 0054ad3e (CONDITIONAL_JUMP)  ; LAB_0054ad3e
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054aed4
        ;   Label: LAB_0054aed4
    MOV ESP,EBP                         ; 0054aed8
    POP EBP                             ; 0054aeda
    POP EDI                             ; 0054aedb
    POP ESI                             ; 0054aedc
    POP EBX                             ; 0054aedd
    RET                                 ; 0054aede
    PUSH 0x5db0f0                       ; 0054aedf | g_CVectorTypeInfo
        ;   Label: LAB_0054aedf
    MOV DL,AH                           ; 0054aee4
    PUSH 0x1388                         ; 0054aee6
    OR DL,0x1                           ; 0054aeeb
    PUSH 0x271383c                      ; 0054aeee | DAT_0271383c
    MOV byte ptr [0x0272229c],DL        ; 0054aef3 | DAT_0272229c
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0054aef9
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0054aefe
    JMP 0x0054ac6b                      ; 0054af01
        ;   XREF to: 0054ac6b (UNCONDITIONAL_JUMP)  ; LAB_0054ac6b

