; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   end_x
; int              Stack[0xc]:4   start_x
; int              Stack[0x10]:4   bitmap_height
; int *            Stack[0x14]:4   height_output
; int              Stack[0x18]:4   num_height_rows
; int              Stack[0x1c]:4   transparency_color
; Local Variables:
; int              Stack[-0x24]:4  local_24
; int *            Stack[-0x1c]:4  local_1c
; int *            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_00617aca
;   TerminatedCString s_Invalid_height_array_siz_00617ae0
;   TerminatedCString s_cockpit_ckptutil_c_00617afb
;   TerminatedCString s_cockpit_ckptutil_c_00617b11
;   TerminatedCString s_No_room_for_scroll_bitma_00617b27
;   TerminatedCString s_cockpit_ckptutil_c_00617b4f
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432df0
        ;   Label: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
    PUSH EDI                            ; 00432df1
    PUSH EBP                            ; 00432df2
    SUB ESP,0x30                        ; 00432df3
    MOV EAX,dword ptr [ESP + 0x40]      ; 00432df6
    MOV EBX,dword ptr [ESP + 0x44]      ; 00432dfa
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00432dfe
    MOV EDI,dword ptr [ESP + 0x58]      ; 00432e02
    MOV dword ptr [ESP],EAX             ; 00432e06
    TEST EAX,EAX                        ; 00432e09
    JZ 0x00432fad                       ; 00432e0b
        ;   XREF to: 00432fad (CONDITIONAL_JUMP)  ; LAB_00432fad
    PUSH ESI                            ; 00432e11
    MOV EAX,EBX                         ; 00432e12
    SUB EAX,EBP                         ; 00432e14
    MOV EDX,dword ptr [ESP + 0x58]      ; 00432e16
    INC EAX                             ; 00432e1a
    CMP EAX,EDX                         ; 00432e1b
    JG 0x00432fb4                       ; 00432e1d
        ;   XREF to: 00432fb4 (CONDITIONAL_JUMP)  ; LAB_00432fb4
    PUSH 0x3fc                          ; 00432e23
        ;   Label: LAB_00432e23
    PUSH 0x617afb                       ; 00432e28 | = "..\\cockpit\\ckptutil.c"
    LEA EAX,[EBP*0x4 + 0x0]             ; 00432e2d
    PUSH EAX                            ; 00432e34
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0 ; 00432e35
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00432e3a
    MOV dword ptr [ESP + 0x20],EAX      ; 00432e3d
    TEST EAX,EAX                        ; 00432e41
    JZ 0x00432fdc                       ; 00432e43
        ;   XREF to: 00432fdc (CONDITIONAL_JUMP)  ; LAB_00432fdc
    XOR ESI,ESI                         ; 00432e49
        ;   Label: LAB_00432e49
    MOV dword ptr [ESP + 0x1c],ESI      ; 00432e4b
    TEST EBP,EBP                        ; 00432e4f
    JLE 0x00432eae                      ; 00432e51
        ;   XREF to: 00432eae (CONDITIONAL_JUMP)  ; LAB_00432eae
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00432e53
    DEC EAX                             ; 00432e57
    MOV dword ptr [ESP + 0x14],EAX      ; 00432e58
    IMUL EAX,EBX                        ; 00432e5c
    MOV EDX,dword ptr [ESP + 0x4]       ; 00432e5f
    ADD EDX,EAX                         ; 00432e63
    MOV EAX,dword ptr [ESP + 0x20]      ; 00432e65
    MOV dword ptr [ESP + 0x8],EDX       ; 00432e69
    MOV dword ptr [ESP + 0x24],EAX      ; 00432e6d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00432e71
        ;   Label: LAB_00432e71
    MOV EAX,dword ptr [ESP + 0x14]      ; 00432e75
    ADD EDX,ESI                         ; 00432e79
    TEST EAX,EAX                        ; 00432e7b
    JL 0x00432e8b                       ; 00432e7d
        ;   XREF to: 00432e8b (CONDITIONAL_JUMP)  ; LAB_00432e8b
    XOR ECX,ECX                         ; 00432e7f
        ;   Label: LAB_00432e7f
    MOV CL,byte ptr [EDX]               ; 00432e81
    CMP ECX,EDI                         ; 00432e83
    JNZ 0x00433003                      ; 00432e85
        ;   XREF to: 00433003 (CONDITIONAL_JUMP)  ; LAB_00433003
    MOV ECX,dword ptr [ESP + 0x24]      ; 00432e8b
        ;   Label: LAB_00432e8b
    LEA EDX,[EAX + 0x1]                 ; 00432e8f
    MOV dword ptr [ECX],EDX             ; 00432e92
    CMP EAX,dword ptr [ESP + 0x1c]      ; 00432e94
    JL 0x00432e9e                       ; 00432e98
        ;   XREF to: 00432e9e (CONDITIONAL_JUMP)  ; LAB_00432e9e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00432e9a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00432e9e
        ;   Label: LAB_00432e9e
    ADD EAX,0x4                         ; 00432ea2
    INC ESI                             ; 00432ea5
    MOV dword ptr [ESP + 0x24],EAX      ; 00432ea6
    CMP ESI,EBP                         ; 00432eaa
    JL 0x00432e71                       ; 00432eac
        ;   XREF to: 00432e71 (CONDITIONAL_JUMP)  ; LAB_00432e71
    MOV EDX,dword ptr [ESP + 0x54]      ; 00432eae
        ;   Label: LAB_00432eae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00432eb2
    MOV dword ptr [EDX],EAX             ; 00432eb6
    MOV EDX,0x1                         ; 00432eb8
    MOV ECX,dword ptr [ESP + 0x58]      ; 00432ebd
    MOV dword ptr [ESP + 0x2c],EDX      ; 00432ec1
    CMP ECX,EDX                         ; 00432ec5
    JLE 0x00432f89                      ; 00432ec7
        ;   XREF to: 00432f89 (CONDITIONAL_JUMP)  ; LAB_00432f89
    MOV EDX,dword ptr [ESP + 0x20]      ; 00432ecd
    LEA EAX,[EBP*0x4 + 0x0]             ; 00432ed1
    ADD EDX,EAX                         ; 00432ed8
    LEA EAX,[EBP + -0x1]                ; 00432eda
    MOV dword ptr [ESP + 0x30],EAX      ; 00432edd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00432ee1
    DEC EAX                             ; 00432ee5
    MOV dword ptr [ESP + 0x18],EAX      ; 00432ee6
    IMUL EAX,EBX                        ; 00432eea
    MOV dword ptr [ESP + 0x10],EDX      ; 00432eed
    ADD EAX,dword ptr [ESP + 0x4]       ; 00432ef1
    MOV EDX,dword ptr [ESP + 0x30]      ; 00432ef5
    ADD EDX,EAX                         ; 00432ef9
    MOV EAX,dword ptr [ESP + 0x54]      ; 00432efb
    ADD EAX,0x4                         ; 00432eff
    MOV dword ptr [ESP + 0xc],EDX       ; 00432f02
    MOV dword ptr [ESP + 0x28],EAX      ; 00432f06
    MOV EAX,dword ptr [ESP + 0xc]       ; 00432f0a
        ;   Label: LAB_00432f0a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00432f0e
    MOV EDX,dword ptr [ESP + 0x18]      ; 00432f12
    ADD EAX,ECX                         ; 00432f16
    TEST EDX,EDX                        ; 00432f18
    JL 0x00432f28                       ; 00432f1a
        ;   XREF to: 00432f28 (CONDITIONAL_JUMP)  ; LAB_00432f28
    XOR ECX,ECX                         ; 00432f1c
        ;   Label: LAB_00432f1c
    MOV CL,byte ptr [EAX]               ; 00432f1e
    CMP ECX,EDI                         ; 00432f20
    JNZ 0x00433013                      ; 00432f22
        ;   XREF to: 00433013 (CONDITIONAL_JUMP)  ; LAB_00433013
    MOV EAX,dword ptr [ESP + 0x30]      ; 00432f28
        ;   Label: LAB_00432f28
    XOR ECX,ECX                         ; 00432f2c
    TEST EAX,EAX                        ; 00432f2e
    JLE 0x00432f47                      ; 00432f30
        ;   XREF to: 00432f47 (CONDITIONAL_JUMP)  ; LAB_00432f47
    MOV EAX,dword ptr [ESP + 0x20]      ; 00432f32
    MOV ESI,dword ptr [EAX + 0x4]       ; 00432f36
        ;   Label: LAB_00432f36
    INC ECX                             ; 00432f39
    MOV dword ptr [EAX],ESI             ; 00432f3a
    MOV ESI,dword ptr [ESP + 0x30]      ; 00432f3c
    ADD EAX,0x4                         ; 00432f40
    CMP ECX,ESI                         ; 00432f43
    JL 0x00432f36                       ; 00432f45
        ;   XREF to: 00432f36 (CONDITIONAL_JUMP)  ; LAB_00432f36
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432f47
        ;   Label: LAB_00432f47
    INC EDX                             ; 00432f4b
    XOR ECX,ECX                         ; 00432f4c
    MOV dword ptr [EAX + -0x4],EDX      ; 00432f4e
    XOR EDX,EDX                         ; 00432f51
    TEST EBP,EBP                        ; 00432f53
    JLE 0x00432f6b                      ; 00432f55
        ;   XREF to: 00432f6b (CONDITIONAL_JUMP)  ; LAB_00432f6b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00432f57
    MOV ESI,dword ptr [EAX]             ; 00432f5b
        ;   Label: LAB_00432f5b
    CMP ECX,ESI                         ; 00432f5d
    JG 0x00432f63                       ; 00432f5f
        ;   XREF to: 00432f63 (CONDITIONAL_JUMP)  ; LAB_00432f63
    MOV ECX,ESI                         ; 00432f61
    INC EDX                             ; 00432f63
        ;   Label: LAB_00432f63
    ADD EAX,0x4                         ; 00432f64
    CMP EDX,EBP                         ; 00432f67
    JL 0x00432f5b                       ; 00432f69
        ;   XREF to: 00432f5b (CONDITIONAL_JUMP)  ; LAB_00432f5b
    MOV EAX,dword ptr [ESP + 0x28]      ; 00432f6b
        ;   Label: LAB_00432f6b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00432f6f
    MOV EDX,dword ptr [ESP + 0x58]      ; 00432f73
    INC ESI                             ; 00432f77
    MOV dword ptr [EAX],ECX             ; 00432f78
    LEA ECX,[EAX + 0x4]                 ; 00432f7a
    MOV dword ptr [ESP + 0x2c],ESI      ; 00432f7d
    MOV dword ptr [ESP + 0x28],ECX      ; 00432f81
    CMP ESI,EDX                         ; 00432f85
    JL 0x00432f0a                       ; 00432f87
        ;   XREF to: 00432f0a (CONDITIONAL_JUMP)  ; LAB_00432f0a
    MOV ECX,0x617b4f                    ; 00432f89 | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_00432f89
    MOV ESI,dword ptr [ESP + 0x20]      ; 00432f8e
    MOV EBX,0x439                       ; 00432f92
    PUSH ESI                            ; 00432f97
    MOV dword ptr [0x0067d20c],ECX      ; 00432f98 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBX      ; 00432f9e | g_CurrentDebugLine
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 00432fa4
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00432fa9
    POP ESI                             ; 00432fac
    ADD ESP,0x30                        ; 00432fad
        ;   Label: LAB_00432fad
    POP EBP                             ; 00432fb0
    POP EDI                             ; 00432fb1
    POP EBX                             ; 00432fb2
    RET                                 ; 00432fb3
    MOV ECX,0x617aca                    ; 00432fb4 | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_00432fb4
    MOV ESI,0x3f8                       ; 00432fb9
    PUSH 0x617ae0                       ; 00432fbe | = "Invalid height array size."
    MOV dword ptr [0x02f0ca48],ECX      ; 00432fc3 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00432fc9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00432fcf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00432fd4
    JMP 0x00432e23                      ; 00432fd7
        ;   XREF to: 00432e23 (UNCONDITIONAL_JUMP)  ; LAB_00432e23
    MOV EAX,0x617b11                    ; 00432fdc | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_00432fdc
    MOV EDX,0x3fe                       ; 00432fe1
    PUSH 0x617b27                       ; 00432fe6 | = "No room for scroll bitmap height table."
    MOV [0x02f0ca48],EAX                ; 00432feb | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00432ff0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00432ff6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00432ffb
    JMP 0x00432e49                      ; 00432ffe
        ;   XREF to: 00432e49 (UNCONDITIONAL_JUMP)  ; LAB_00432e49
    DEC EAX                             ; 00433003
        ;   Label: LAB_00433003
    SUB EDX,EBX                         ; 00433004
    TEST EAX,EAX                        ; 00433006
    JGE 0x00432e7f                      ; 00433008
        ;   XREF to: 00432e7f (CONDITIONAL_JUMP)  ; LAB_00432e7f
    JMP 0x00432e8b                      ; 0043300e
        ;   XREF to: 00432e8b (UNCONDITIONAL_JUMP)  ; LAB_00432e8b
    DEC EDX                             ; 00433013
        ;   Label: LAB_00433013
    SUB EAX,EBX                         ; 00433014
    TEST EDX,EDX                        ; 00433016
    JGE 0x00432f1c                      ; 00433018
        ;   XREF to: 00432f1c (CONDITIONAL_JUMP)  ; LAB_00432f1c
    JMP 0x00432f28                      ; 0043301e
        ;   XREF to: 00432f28 (UNCONDITIONAL_JUMP)  ; LAB_00432f28

