; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004e8bc0(CGhoul *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   void* switchdataD_004e8ba4 = 004e8c2d
;   double DOUBLE_0062ded2 = 0.5
;   double DOUBLE_0062deda = 0.700000000000000
;   double DOUBLE_0062dee2 = 0.300000000000000
;   int INT_02d832fc
;   int INT_02d83310
;   int INT_02d83314
;   int INT_02d83320
;   int INT_02d83324
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8bc0
        ;   Label: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004e8bc0
    PUSH ESI                            ; 004e8bc1
    PUSH EDI                            ; 004e8bc2
    PUSH EBP                            ; 004e8bc3
    MOV EBP,ESP                         ; 004e8bc4
    SUB ESP,0x4c                        ; 004e8bc6
    AND ESP,0xfffffff8                  ; 004e8bc9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e8bcc
    MOV EDX,dword ptr [0x02d83320]      ; 004e8bcf | INT_02d83320
    PUSH EDX                            ; 004e8bd5
    LEA EAX,[ESP + 0x34]                ; 004e8bd6
    PUSH EAX                            ; 004e8bda
    LEA EAX,[ESI + 0x158]               ; 004e8bdb
    PUSH EAX                            ; 004e8be1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8be2
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004e8be7
    LEA EAX,[ESP + 0x30]                ; 004e8bea
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e8bee
    CMP EAX,ECX                         ; 004e8bf1
    JNZ 0x004e8cea                      ; 004e8bf3
        ;   XREF to: 004e8cea (CONDITIONAL_JUMP)  ; LAB_004e8cea
    XOR EDI,EDI                         ; 004e8bf9
        ;   Label: LAB_004e8bf9
    MOV EBX,0x1                         ; 004e8bfb
    MOV dword ptr [ESP + 0x48],EDI      ; 004e8c00
    LEA EDI,[ESI + 0x158]               ; 004e8c04
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e8c0a
        ;   Label: LAB_004e8c0a
    ADD EDX,dword ptr [ESI + 0x6c]      ; 004e8c0e
    MOV ECX,0x4                         ; 004e8c11
    MOV EAX,EDX                         ; 004e8c16
    SAR EDX,0x1f                        ; 004e8c18
    IDIV ECX                            ; 004e8c1b
    CMP EDX,0x3                         ; 004e8c1d
    JA 0x004e8ccf                       ; 004e8c20
        ;   XREF to: 004e8ccf (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4e8ba4]  ; 004e8c26 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [ESI + 0xbee0]    ; 004e8c2d
        ;   Label: caseD_0
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e8c33
    JZ 0x004e8ccf                       ; 004e8c3b
        ;   XREF to: 004e8ccf (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x02d83310]      ; 004e8c41 | INT_02d83310
    PUSH ECX                            ; 004e8c47
    LEA EAX,[ESP + 0x40]                ; 004e8c48
    PUSH EAX                            ; 004e8c4c
        ;   Label: LAB_004e8c4c
    PUSH EDI                            ; 004e8c4d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8c4e
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 004e8c53
    LEA EAX,[ESP + 0x24]                ; 004e8c55
    ADD ESP,0xc                         ; 004e8c59
    CMP EAX,EDX                         ; 004e8c5c
    JZ 0x004e8c74                       ; 004e8c5e
        ;   XREF to: 004e8c74 (CONDITIONAL_JUMP)  ; LAB_004e8c74
    MOV EAX,dword ptr [EDX]             ; 004e8c60
    MOV dword ptr [ESP + 0x18],EAX      ; 004e8c62
    MOV EAX,dword ptr [EDX + 0x4]       ; 004e8c66
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e8c69
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e8c6d
    MOV dword ptr [ESP + 0x20],EAX      ; 004e8c70
    IMUL EDX,EBX,0xc                    ; 004e8c74
        ;   Label: LAB_004e8c74
    FLD double ptr [0x0062ded2]         ; 004e8c77 | DOUBLE_0062ded2
    FLD float ptr [ESP + 0x18]          ; 004e8c7d
    FMUL ST1                            ; 004e8c81
    FLD float ptr [ESP + 0x1c]          ; 004e8c83
    FMUL double ptr [0x0062deda]        ; 004e8c87 | DOUBLE_0062deda
    FLD float ptr [ESP + 0x30]          ; 004e8c8d
    FMULP ST3                           ; 004e8c91
    FLD float ptr [ESP + 0x34]          ; 004e8c93
    FMUL double ptr [0x0062dee2]        ; 004e8c97 | DOUBLE_0062dee2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e8c9d
    FADDP                               ; 004e8ca0
    FXCH ST2                            ; 004e8ca2
    FADDP                               ; 004e8ca4
    FXCH                                ; 004e8ca6
    FSTP float ptr [ESP + 0x1c]         ; 004e8ca8
    ADD EDX,EAX                         ; 004e8cac
    LEA EAX,[ESP + 0x18]                ; 004e8cae
    FSTP float ptr [ESP + 0x18]         ; 004e8cb2
    CMP EDX,EAX                         ; 004e8cb6
    JZ 0x004e8cce                       ; 004e8cb8
        ;   XREF to: 004e8cce (CONDITIONAL_JUMP)  ; LAB_004e8cce
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e8cba
    MOV dword ptr [EDX],EAX             ; 004e8cbe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e8cc0
    MOV dword ptr [EDX + 0x4],EAX       ; 004e8cc4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e8cc7
    MOV dword ptr [EDX + 0x8],EAX       ; 004e8ccb
    INC EBX                             ; 004e8cce
        ;   Label: LAB_004e8cce
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e8ccf
        ;   Label: default
    INC EDX                             ; 004e8cd3
    MOV dword ptr [ESP + 0x48],EDX      ; 004e8cd4
    CMP EDX,0x4                         ; 004e8cd8
    JL 0x004e8c0a                       ; 004e8cdb
        ;   XREF to: 004e8c0a (CONDITIONAL_JUMP)  ; LAB_004e8c0a
    MOV EAX,EBX                         ; 004e8ce1
    MOV ESP,EBP                         ; 004e8ce3
    POP EBP                             ; 004e8ce5
    POP EDI                             ; 004e8ce6
    POP ESI                             ; 004e8ce7
    POP EBX                             ; 004e8ce8
    RET                                 ; 004e8ce9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e8cea
        ;   Label: LAB_004e8cea
    MOV dword ptr [ECX],EAX             ; 004e8cee
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e8cf0
    MOV dword ptr [ECX + 0x4],EAX       ; 004e8cf4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e8cf7
    MOV dword ptr [ECX + 0x8],EAX       ; 004e8cfb
    JMP 0x004e8bf9                      ; 004e8cfe
        ;   XREF to: 004e8bf9 (UNCONDITIONAL_JUMP)  ; LAB_004e8bf9
    MOV EAX,dword ptr [ESI + 0xbee8]    ; 004e8d03
        ;   Label: caseD_1
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e8d09
    JZ 0x004e8ccf                       ; 004e8d11
        ;   XREF to: 004e8ccf (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x02d83314]      ; 004e8d13 | INT_02d83314
    PUSH ECX                            ; 004e8d19
    LEA EAX,[ESP + 0x10]                ; 004e8d1a
    JMP 0x004e8c4c                      ; 004e8d1e
        ;   XREF to: 004e8c4c (UNCONDITIONAL_JUMP)  ; LAB_004e8c4c
    MOV EAX,dword ptr [ESI + 0xbf08]    ; 004e8d23
        ;   Label: caseD_2
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e8d29
    JZ 0x004e8ccf                       ; 004e8d31
        ;   XREF to: 004e8ccf (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x02d832fc]      ; 004e8d33 | INT_02d832fc
    PUSH ECX                            ; 004e8d39
    LEA EAX,[ESP + 0x28]                ; 004e8d3a
    PUSH EAX                            ; 004e8d3e
    PUSH EDI                            ; 004e8d3f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8d40
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,EBX,0xc                    ; 004e8d45
    ADD ESP,0xc                         ; 004e8d48
    ADD EDX,dword ptr [EBP + 0x18]      ; 004e8d4b
    CMP EDX,EAX                         ; 004e8d4e
    JZ 0x004e8cce                       ; 004e8d50
        ;   XREF to: 004e8cce (CONDITIONAL_JUMP)  ; LAB_004e8cce
    MOV ECX,dword ptr [EAX]             ; 004e8d56
    MOV dword ptr [EDX],ECX             ; 004e8d58
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e8d5a
    MOV dword ptr [EDX + 0x4],ECX       ; 004e8d5d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004e8d60
    MOV dword ptr [EDX + 0x8],ECX       ; 004e8d63
    JMP 0x004e8cce                      ; 004e8d66
        ;   XREF to: 004e8cce (UNCONDITIONAL_JUMP)  ; LAB_004e8cce
    MOV EAX,dword ptr [ESI + 0xbf04]    ; 004e8d6b
        ;   Label: caseD_3
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 004e8d71
    JZ 0x004e8ccf                       ; 004e8d79
        ;   XREF to: 004e8ccf (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [0x02d83324]      ; 004e8d7f | INT_02d83324
    PUSH ECX                            ; 004e8d85
    LEA EAX,[ESP + 0x4]                 ; 004e8d86
    PUSH EAX                            ; 004e8d8a
    PUSH EDI                            ; 004e8d8b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004e8d8c
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,EBX,0xc                    ; 004e8d91
    ADD ESP,0xc                         ; 004e8d94
    ADD EDX,dword ptr [EBP + 0x18]      ; 004e8d97
    CMP EDX,EAX                         ; 004e8d9a
    JZ 0x004e8cce                       ; 004e8d9c
        ;   XREF to: 004e8cce (CONDITIONAL_JUMP)  ; LAB_004e8cce
    MOV ECX,dword ptr [EAX]             ; 004e8da2
    MOV dword ptr [EDX],ECX             ; 004e8da4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e8da6
    MOV dword ptr [EDX + 0x4],ECX       ; 004e8da9
    MOV ECX,dword ptr [EAX + 0x8]       ; 004e8dac
    MOV dword ptr [EDX + 0x8],ECX       ; 004e8daf
    JMP 0x004e8cce                      ; 004e8db2
        ;   XREF to: 004e8cce (UNCONDITIONAL_JUMP)  ; LAB_004e8cce

