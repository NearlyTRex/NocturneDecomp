; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; SMRGLModelBounds Stack[-0xc4]:52  local_c4
; int[13]          Stack[-0x90]:52  local_90
; int              Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x28]:4  local_28
; _FILE *          Stack[-0x24]:4  local_24
; SMRGLHeaderExtended * Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 at 0053efd4
;
; Referenced Globals:
;   TerminatedCString s_rb_0062250a
;   TerminatedCString s_models_0062250d
;   TerminatedCString s_shape_dsemodel_cpp_00622514
;   double g_ModelScalingNormalizationFactor = 0.00390625
;
; Called Functions:
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_getMRGLBounds_FUN_00528140
;   engine_model.c_loadModelFile_FUN_00527ec0
;   shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
;   shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
;   shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
;   shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fed0
        ;   Label: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
    PUSH ESI                            ; 0048fed1
    PUSH EDI                            ; 0048fed2
    PUSH EBP                            ; 0048fed3
    MOV EBP,ESP                         ; 0048fed4
    SUB ESP,0xb8                        ; 0048fed6
    MOV EAX,0x62250a                    ; 0048fedc | = "rb"
    PUSH EAX                            ; 0048fee1 | = "rb"
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048fee2
    PUSH EAX                            ; 0048fee5
    MOV EAX,0x62250d                    ; 0048fee6 | = "models"
    PUSH EAX                            ; 0048feeb | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0048feec
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0048fef1
    MOV dword ptr [EBP + -0x14],EAX     ; 0048fef4
    CMP dword ptr [EBP + -0x14],0x0     ; 0048fef7
    JNZ 0x0048ff09                      ; 0048fefb
        ;   XREF to: 0048ff09 (CONDITIONAL_JUMP)  ; LAB_0048ff09
    MOV dword ptr [EBP + -0x18],0x0     ; 0048fefd
    JMP 0x0049000d                      ; 0048ff04
        ;   XREF to: 0049000d (UNCONDITIONAL_JUMP)  ; LAB_0049000d
    PUSH 0x180                          ; 0048ff09
        ;   Label: LAB_0048ff09
    MOV EAX,0x622514                    ; 0048ff0e | = "..\\shape\\dsemodel.cpp"
    PUSH EAX                            ; 0048ff13 | = "..\\shape\\dsemodel.cpp"
    MOV EAX,dword ptr [EBP + -0x14]     ; 0048ff14
    PUSH EAX                            ; 0048ff17
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0048ff18
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0048ff1d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048ff20
    PUSH EAX                            ; 0048ff23
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 0048ff24
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 0048ff29
    MOV dword ptr [EBP + -0x10],EAX     ; 0048ff2c
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048ff2f
    PUSH EAX                            ; 0048ff32
    LEA ESI,[EBP + 0xffffff4c]          ; 0048ff33
    CALL engine_model.c_getMRGLBounds_FUN_00528140 ; 0048ff39
        ;   XREF to: 00528140 (UNCONDITIONAL_CALL)  ; SMRGLModelBounds * engine_model.c_getMRGLBounds_FUN_00528140(SMRGLHeaderExtended * mrgl_data, SMRGLModelBounds * output_bounds)
    ADD ESP,0x4                         ; 0048ff3e
    MOV ECX,0xd                         ; 0048ff41
    LEA EDI,[EBP + -0x80]               ; 0048ff46
    LEA ESI,[EBP + 0xffffff4c]          ; 0048ff49
    MOVSD.REP ES:EDI,ESI                ; 0048ff4f
    MOV ECX,0xd                         ; 0048ff51
    LEA EDI,[EBP + -0x4c]               ; 0048ff56
    LEA ESI,[EBP + -0x80]               ; 0048ff59
    MOVSD.REP ES:EDI,ESI                ; 0048ff5c
    MOV EAX,dword ptr [EBP + -0x40]     ; 0048ff5e
    SUB EAX,dword ptr [EBP + -0x4c]     ; 0048ff61
    MOV dword ptr [EBP + 0xffffff48],EAX ; 0048ff64
    FILD dword ptr [EBP + 0xffffff48]   ; 0048ff6a
    FMUL double ptr [0x0062252a]        ; 0048ff70 | g_ModelScalingNormalizationFactor
    FSTP float ptr [EBP + -0xc]         ; 0048ff76
    MOV EAX,dword ptr [EBP + -0x38]     ; 0048ff79
    SUB EAX,dword ptr [EBP + -0x44]     ; 0048ff7c
    MOV dword ptr [EBP + 0xffffff48],EAX ; 0048ff7f
    FILD dword ptr [EBP + 0xffffff48]   ; 0048ff85
    FMUL double ptr [0x0062252a]        ; 0048ff8b | g_ModelScalingNormalizationFactor
    FSTP float ptr [EBP + -0x8]         ; 0048ff91
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0048ff94
    SUB EAX,dword ptr [EBP + -0x48]     ; 0048ff97
    MOV dword ptr [EBP + 0xffffff48],EAX ; 0048ff9a
    FILD dword ptr [EBP + 0xffffff48]   ; 0048ffa0
    FMUL double ptr [0x0062252a]        ; 0048ffa6 | g_ModelScalingNormalizationFactor
    FSTP float ptr [EBP + -0x4]         ; 0048ffac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048ffaf
    PUSH EAX                            ; 0048ffb2
    CALL shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50 ; 0048ffb3
        ;   XREF to: 0048fa50 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel * this_ptr)
    ADD ESP,0x4                         ; 0048ffb8
    FLD float ptr [EBP + -0xc]          ; 0048ffbb
    SUB ESP,0x4                         ; 0048ffbe
    FSTP float ptr [ESP]                ; 0048ffc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048ffc4
    PUSH EAX                            ; 0048ffc7
    CALL shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70 ; 0048ffc8
        ;   XREF to: 0048fd70 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70(CDSEModel * this_ptr, float scale_factor)
    ADD ESP,0x8                         ; 0048ffcd
    FLD float ptr [EBP + -0x4]          ; 0048ffd0
    SUB ESP,0x4                         ; 0048ffd3
    FSTP float ptr [ESP]                ; 0048ffd6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048ffd9
    PUSH EAX                            ; 0048ffdc
    CALL shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20 ; 0048ffdd
        ;   XREF to: 0048fe20 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20(CDSEModel * this_ptr, float scale_factor)
    ADD ESP,0x8                         ; 0048ffe2
    FLD float ptr [EBP + -0x8]          ; 0048ffe5
    SUB ESP,0x4                         ; 0048ffe8
    FSTP float ptr [ESP]                ; 0048ffeb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048ffee
    PUSH EAX                            ; 0048fff1
    CALL shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0 ; 0048fff2
        ;   XREF to: 0048fcc0 (UNCONDITIONAL_CALL)  ; void shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0(CDSEModel * this_ptr, float scale_factor)
    ADD ESP,0x8                         ; 0048fff7
    MOV EAX,dword ptr [EBP + -0x10]     ; 0048fffa
    PUSH EAX                            ; 0048fffd
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 0048fffe
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 00490003
    MOV dword ptr [EBP + -0x18],0x1     ; 00490006
    MOV EAX,dword ptr [EBP + -0x18]     ; 0049000d
        ;   Label: LAB_0049000d
    MOV ESP,EBP                         ; 00490010
    POP EBP                             ; 00490012
    POP EDI                             ; 00490013
    POP ESI                             ; 00490014
    POP EBX                             ; 00490015
    RET                                 ; 00490016

