; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; CVector3f        Stack[-0x5c]:12  CStack_5c
; CVector3f        Stack[-0x50]:12  CStack_50
; CVector3f        Stack[-0x44]:12  CStack_44
; CVector3f        Stack[-0x38]:12  CStack_38
; CVector3f        Stack[-0x2c]:12  CStack_2c
; CVector3f        Stack[-0x20]:12  CStack_20
; CVector3f        Stack[-0x14]:12  CStack_14
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 at 00575b7f
;   core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60 at 00575f67
;
; Referenced Globals:
;   void* switchdataD_00575ba0 = 00575c00
;   TerminatedCString s_core_setdir_cpp_006464f9
;   TerminatedCString s_Hell_froze_0064650c
;   double DOUBLE_0064651e = 0.0555555555555556
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CZThumb[1500] g_CZThumbPool
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575bc0
        ;   Label: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
    PUSH EBP                            ; 00575bc1
    SUB ESP,0x54                        ; 00575bc2
    MOV EBP,dword ptr [ESP + 0x60]      ; 00575bc5
    PUSH EBP                            ; 00575bc9
    CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0 ; 00575bca
        ;   XREF to: 00575df0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet * this_ptr)
    XOR EBX,EBX                         ; 00575bcf
    ADD ESP,0x4                         ; 00575bd1
    CMP EBX,dword ptr [EBP]             ; 00575bd4
        ;   Label: LAB_00575bd4
    JGE 0x00575de7                      ; 00575bd7
        ;   XREF to: 00575de7 (CONDITIONAL_JUMP)  ; LAB_00575de7
    PUSH EDI                            ; 00575bdd
    PUSH ESI                            ; 00575bde
    IMUL EDI,EBX,0x1a4                  ; 00575bdf
    LEA EAX,[EBP + 0x4]                 ; 00575be5
    ADD EDI,EAX                         ; 00575be8
    CMP dword ptr [EDI + 0x140],0x0     ; 00575bea
    JZ 0x00575d9c                       ; 00575bf1
        ;   XREF to: 00575d9c (CONDITIONAL_JUMP)  ; LAB_00575d9c
    XOR ESI,ESI                         ; 00575bf7
    JMP dword ptr [ESI*0x4 + 0x575ba0]  ; 00575bf9 | default | caseD_1 | caseD_2
        ;   Label: switchD
    XOR EAX,EAX                         ; 00575c00
        ;   Label: caseD_0
    LEA EDX,[ESP + 0x38]                ; 00575c02
    MOV dword ptr [ESP + 0x10],EAX      ; 00575c06
    MOV dword ptr [ESP + 0xc],EAX       ; 00575c0a
    MOV dword ptr [ESP + 0x8],EAX       ; 00575c0e
    LEA EAX,[ESP + 0x8]                 ; 00575c12
    CMP EDX,EAX                         ; 00575c16
    JZ 0x00575c28                       ; 00575c18
        ;   XREF to: 00575c28 (CONDITIONAL_JUMP)  ; LAB_00575c28
    XOR EAX,EAX                         ; 00575c1a
    MOV dword ptr [ESP + 0x3c],EAX      ; 00575c1c
    MOV dword ptr [ESP + 0x40],EAX      ; 00575c20
        ;   Label: LAB_00575c20
    MOV dword ptr [ESP + 0x38],EAX      ; 00575c24
        ;   Label: LAB_00575c24
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00575c28
        ;   Label: LAB_00575c28
    PUSH EAX                            ; 00575c2c
    PUSH 0x3f800000                     ; 00575c2d
    PUSH 0x40                           ; 00575c32
    PUSH 0x40                           ; 00575c34
    LEA EAX,[ESP + 0x48]                ; 00575c36
    PUSH EAX                            ; 00575c3a
    LEA EAX,[EDI + 0x100]               ; 00575c3b
    PUSH EAX                            ; 00575c41
    MOV EAX,EBX                         ; 00575c42
    SHL EAX,0x4                         ; 00575c44
    MOV EDX,EAX                         ; 00575c47
    SHL EAX,0x4                         ; 00575c49
    MOV ECX,0x3347108                   ; 00575c4c | g_CZThumbPool
    SUB EAX,EDX                         ; 00575c51
    ADD ECX,EAX                         ; 00575c53
    LEA EAX,[ESI*0x4 + 0x0]             ; 00575c55
    ADD EAX,ESI                         ; 00575c5c
    SHL EAX,0x3                         ; 00575c5e
    ADD EAX,ECX                         ; 00575c61
    PUSH EAX                            ; 00575c63
    INC ESI                             ; 00575c64
    CALL core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 ; 00575c65
        ;   XREF to: 00574910 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910(CZThumb * this_ptr, CVector3f * camera_pos, CVector3f * look_at_pos, int width, ...)
    ADD ESP,0x1c                        ; 00575c6a
    CMP ESI,0x6                         ; 00575c6d
    JGE 0x00575c9c                      ; 00575c70
        ;   XREF to: 00575c9c (CONDITIONAL_JUMP)  ; LAB_00575c9c
    CMP ESI,0x5                         ; 00575c72
    JBE 0x00575bf9                      ; 00575c75
        ;   XREF to: 00575bf9 (CONDITIONAL_JUMP)  ; switchD
    MOV EDX,0x6464f9                    ; 00575c77 | = "..\\core\\setdir.cpp"
    MOV ECX,0x39d                       ; 00575c7c
    PUSH 0x64650c                       ; 00575c81 | = "Hell froze"
    MOV dword ptr [0x02f0ca48],EDX      ; 00575c86 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00575c8c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00575c92
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   Label: prt_575c92_3831e62a
    ADD ESP,0x4                         ; 00575c97
    JMP 0x00575c28                      ; 00575c9a
        ;   XREF to: 00575c28 (UNCONDITIONAL_JUMP)  ; LAB_00575c28
    INC EBX                             ; 00575c9c
        ;   Label: LAB_00575c9c
    POP ESI                             ; 00575c9d
    POP EDI                             ; 00575c9e
    JMP 0x00575bd4                      ; 00575c9f
        ;   XREF to: 00575bd4 (UNCONDITIONAL_JUMP)  ; LAB_00575bd4
    MOV ECX,0x40490fdb                  ; 00575ca4
        ;   Label: caseD_1
    XOR EAX,EAX                         ; 00575ca9
    LEA EDX,[ESP + 0x50]                ; 00575cab
    MOV dword ptr [ESP + 0x58],EAX      ; 00575caf
    MOV dword ptr [ESP + 0x50],EAX      ; 00575cb3
    LEA EAX,[ESP + 0x38]                ; 00575cb7
    MOV dword ptr [ESP + 0x54],ECX      ; 00575cbb
    CMP EAX,EDX                         ; 00575cbf
    JZ 0x00575c28                       ; 00575cc1
        ;   XREF to: 00575c28 (CONDITIONAL_JUMP)  ; LAB_00575c28
    XOR EAX,EAX                         ; 00575cc7
    MOV dword ptr [ESP + 0x3c],ECX      ; 00575cc9
    JMP 0x00575c20                      ; 00575ccd
        ;   XREF to: 00575c20 (UNCONDITIONAL_JUMP)  ; LAB_00575c20
    MOV ECX,0x3fc90fdb                  ; 00575cd2
        ;   Label: caseD_2
    XOR EAX,EAX                         ; 00575cd7
    LEA EDX,[ESP + 0x38]                ; 00575cd9
    MOV dword ptr [ESP + 0x1c],EAX      ; 00575cdd
    MOV dword ptr [ESP + 0x14],EAX      ; 00575ce1
    LEA EAX,[ESP + 0x14]                ; 00575ce5
    MOV dword ptr [ESP + 0x18],ECX      ; 00575ce9
    CMP EDX,EAX                         ; 00575ced
    JZ 0x00575c28                       ; 00575cef
        ;   XREF to: 00575c28 (CONDITIONAL_JUMP)  ; LAB_00575c28
    XOR EAX,EAX                         ; 00575cf5
    MOV dword ptr [ESP + 0x3c],ECX      ; 00575cf7
    JMP 0x00575c20                      ; 00575cfb
        ;   XREF to: 00575c20 (UNCONDITIONAL_JUMP)  ; LAB_00575c20
    MOV ECX,0xbfc90fdb                  ; 00575d00
        ;   Label: caseD_3
    XOR EAX,EAX                         ; 00575d05
    LEA EDX,[ESP + 0x20]                ; 00575d07
    MOV dword ptr [ESP + 0x28],EAX      ; 00575d0b
    MOV dword ptr [ESP + 0x20],EAX      ; 00575d0f
    LEA EAX,[ESP + 0x38]                ; 00575d13
    MOV dword ptr [ESP + 0x24],ECX      ; 00575d17
    CMP EAX,EDX                         ; 00575d1b
    JZ 0x00575c28                       ; 00575d1d
        ;   XREF to: 00575c28 (CONDITIONAL_JUMP)  ; LAB_00575c28
    XOR EAX,EAX                         ; 00575d23
    MOV dword ptr [ESP + 0x3c],ECX      ; 00575d25
    JMP 0x00575c20                      ; 00575d29
        ;   XREF to: 00575c20 (UNCONDITIONAL_JUMP)  ; LAB_00575c20
    XOR EDX,EDX                         ; 00575d2e
        ;   Label: caseD_4
    MOV EAX,0xbfc90fdb                  ; 00575d30
    MOV dword ptr [ESP + 0x4c],EDX      ; 00575d35
    MOV dword ptr [ESP + 0x48],EDX      ; 00575d39
    MOV dword ptr [ESP + 0x44],EAX      ; 00575d3d
    LEA EDX,[ESP + 0x44]                ; 00575d41
    LEA EAX,[ESP + 0x38]                ; 00575d45
    CMP EAX,EDX                         ; 00575d49
    JZ 0x00575c28                       ; 00575d4b
        ;   XREF to: 00575c28 (CONDITIONAL_JUMP)  ; LAB_00575c28
    XOR EDX,EDX                         ; 00575d51
    MOV EAX,0xbfc90fdb                  ; 00575d53
    MOV dword ptr [ESP + 0x3c],EDX      ; 00575d58
    MOV dword ptr [ESP + 0x40],EDX      ; 00575d5c
    JMP 0x00575c24                      ; 00575d60
        ;   XREF to: 00575c24 (UNCONDITIONAL_JUMP)  ; LAB_00575c24
    MOV EAX,0x3fc90fdb                  ; 00575d65
        ;   Label: caseD_5
    XOR EDX,EDX                         ; 00575d6a
    MOV dword ptr [ESP + 0x2c],EAX      ; 00575d6c
    MOV dword ptr [ESP + 0x34],EDX      ; 00575d70
    MOV dword ptr [ESP + 0x30],EDX      ; 00575d74
    LEA EAX,[ESP + 0x2c]                ; 00575d78
    LEA EDX,[ESP + 0x38]                ; 00575d7c
    CMP EDX,EAX                         ; 00575d80
    JZ 0x00575c28                       ; 00575d82
        ;   XREF to: 00575c28 (CONDITIONAL_JUMP)  ; LAB_00575c28
    XOR EDX,EDX                         ; 00575d88
    MOV EAX,0x3fc90fdb                  ; 00575d8a
    MOV dword ptr [ESP + 0x3c],EDX      ; 00575d8f
    MOV dword ptr [ESP + 0x40],EDX      ; 00575d93
    JMP 0x00575c24                      ; 00575d97
        ;   XREF to: 00575c24 (UNCONDITIONAL_JUMP)  ; LAB_00575c24
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00575d9c
        ;   Label: LAB_00575d9c
    FLD float ptr [EDI + 0x144]         ; 00575da0
    PUSH ESI                            ; 00575da6
    FMUL double ptr [0x0064651e]        ; 00575da7 | DOUBLE_0064651e
    SUB ESP,0x4                         ; 00575dad
    FSTP float ptr [ESP]                ; 00575db0
    PUSH 0x30                           ; 00575db3
    PUSH 0x40                           ; 00575db5
    LEA EAX,[EDI + 0x10c]               ; 00575db7
    PUSH EAX                            ; 00575dbd
    MOV EAX,EBX                         ; 00575dbe
    SHL EAX,0x4                         ; 00575dc0
    MOV ESI,EAX                         ; 00575dc3
    SHL EAX,0x4                         ; 00575dc5
    ADD EDI,0x100                       ; 00575dc8
    SUB EAX,ESI                         ; 00575dce
    PUSH EDI                            ; 00575dd0
    ADD EAX,0x3347108                   ; 00575dd1 | g_CZThumbPool
    PUSH EAX                            ; 00575dd6
    CALL core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 ; 00575dd7
        ;   XREF to: 00574910 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910(CZThumb * this_ptr, CVector3f * camera_pos, CVector3f * look_at_pos, int width, ...)
    ADD ESP,0x1c                        ; 00575ddc
    INC EBX                             ; 00575ddf
    POP ESI                             ; 00575de0
    POP EDI                             ; 00575de1
    JMP 0x00575bd4                      ; 00575de2
        ;   XREF to: 00575bd4 (UNCONDITIONAL_JUMP)  ; LAB_00575bd4
    ADD ESP,0x54                        ; 00575de7
        ;   Label: LAB_00575de7
    POP EBP                             ; 00575dea
    POP EBX                             ; 00575deb
    RET                                 ; 00575dec

