; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730(void)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
;
; XREF[1]:
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 at 005eda0f
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_0065791c
;   TerminatedCString s_setColorTable16_Unable_t_00657933
;   TerminatedCString s_wincore_wddvmem_cpp_00657961
;   TerminatedCString s_setColorTable16_Unable_t_00657978
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_RedBitCount
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_GreenBitCount
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;   int g_BlueBitCount
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ed730
        ;   Label: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
    SUB ESP,0x6c                        ; 005ed731
    PUSH 0x6c                           ; 005ed734
    PUSH 0x0                            ; 005ed736
    LEA EAX,[ESP + 0x8]                 ; 005ed738
    PUSH EAX                            ; 005ed73c
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ed73d | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005ed742
    PUSH 0x0                            ; 005ed745
    PUSH 0x1                            ; 005ed747
    LEA ECX,[ESP + 0x8]                 ; 005ed749
    MOV EDX,0x6c                        ; 005ed74d
    PUSH ECX                            ; 005ed752
    MOV EAX,[0x03f95928]                ; 005ed753 | IDirectDrawSurface * g_SoftwareRenderSurface
    MOV dword ptr [ESP + 0xc],EDX       ; 005ed758
    PUSH 0x0                            ; 005ed75c
    MOV EDX,dword ptr [EAX]             ; 005ed75e
    PUSH EAX                            ; 005ed760
    CALL dword ptr [EDX + 0x64]         ; 005ed761
    TEST EAX,EAX                        ; 005ed764
    JNZ 0x005ed7f0                      ; 005ed766 | LAB_005ed7f0
        ;   XREF to: 005ed7f0 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005ed76c
        ;   Label: LAB_005ed76c
    MOV EAX,[0x03f95928]                ; 005ed76e | IDirectDrawSurface * g_SoftwareRenderSurface
    PUSH EAX                            ; 005ed773
    MOV ECX,dword ptr [EAX]             ; 005ed774
    CALL dword ptr [ECX + 0x80]         ; 005ed776
    TEST EAX,EAX                        ; 005ed77c
    JZ 0x005ed7a7                       ; 005ed77e | LAB_005ed7a7
        ;   XREF to: 005ed7a7 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005ed780
    PUSH ESI                            ; 005ed781
    MOV ESI,0x657961                    ; 005ed782 | = "..\\wincore\\wddvmem.cpp" | s_wincore_wddvmem_cpp_00657961 = ..\wincore\wddvmem.cpp
    MOV EDI,0x2b0                       ; 005ed787
    PUSH 0x657978                       ; 005ed78c | = "setColorTable16 - Unable to unlock ba..." | s_setColorTable16_Unable_t_00657978 = setColorTable16 - Unable to unlock back buffer!
    MOV dword ptr [0x02f0ca48],ESI      ; 005ed791 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ed797 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed79d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ed7a2
    POP ESI                             ; 005ed7a5
    POP EDI                             ; 005ed7a6
    MOV EAX,dword ptr [ESP + 0x58]      ; 005ed7a7
        ;   Label: LAB_005ed7a7
    MOV DL,byte ptr [ESP + 0x58]        ; 005ed7ab
    XOR ECX,ECX                         ; 005ed7af
    TEST DL,0x1                         ; 005ed7b1
    JNZ 0x005ed7c0                      ; 005ed7b4 | LAB_005ed7c0
        ;   XREF to: 005ed7c0 (CONDITIONAL_JUMP)
    SHR EAX,0x1                         ; 005ed7b6
        ;   Label: LAB_005ed7b6
    INC ECX                             ; 005ed7b8
    TEST AL,0x1                         ; 005ed7b9
    JZ 0x005ed7b6                       ; 005ed7bb | LAB_005ed7b6
        ;   XREF to: 005ed7b6 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005ed7bd
    MOV EAX,dword ptr [ESP + 0x58]      ; 005ed7c0
        ;   Label: LAB_005ed7c0
    MOV dword ptr [0x02d01f24],ECX      ; 005ed7c4 | int g_RedBitPosition
    SHR EAX,CL                          ; 005ed7ca
    XOR EDX,EDX                         ; 005ed7cc
    MOV ECX,EAX                         ; 005ed7ce
    MOV EAX,0xff                        ; 005ed7d0
    DIV ECX                             ; 005ed7d5
    MOV [0x02d01f28],EAX                ; 005ed7d7 | int g_RedScaleFactor
    XOR ECX,ECX                         ; 005ed7dc
    TEST EAX,EAX                        ; 005ed7de
    JZ 0x005ed818                       ; 005ed7e0 | LAB_005ed818
        ;   XREF to: 005ed818 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 005ed7e2
        ;   Label: LAB_005ed7e2
    JBE 0x005ed86c                      ; 005ed7e5 | LAB_005ed86c
        ;   XREF to: 005ed86c (CONDITIONAL_JUMP)
    INC ECX                             ; 005ed7eb
    SHR EAX,0x1                         ; 005ed7ec
    JMP 0x005ed7e2                      ; 005ed7ee | LAB_005ed7e2
        ;   XREF to: 005ed7e2 (UNCONDITIONAL_JUMP)
    MOV ECX,0x65791c                    ; 005ed7f0 | = "..\\wincore\\wddvmem.cpp" | s_wincore_wddvmem_cpp_0065791c = ..\wincore\wddvmem.cpp
        ;   Label: LAB_005ed7f0
    MOV EBX,0x2ae                       ; 005ed7f5
    PUSH 0x657933                       ; 005ed7fa | = "setColorTable16 - Unable to lock back..." | s_setColorTable16_Unable_t_00657933 = setColorTable16 - Unable to lock back buffer!
    MOV dword ptr [0x02f0ca48],ECX      ; 005ed7ff | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005ed805 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed80b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ed810
    JMP 0x005ed76c                      ; 005ed813 | LAB_005ed76c
        ;   XREF to: 005ed76c (UNCONDITIONAL_JUMP)
    MOV EAX,0x20                        ; 005ed818
        ;   Label: LAB_005ed818
    MOV DH,byte ptr [ESP + 0x5c]        ; 005ed81d
        ;   Label: LAB_005ed81d
    MOV [0x02d01f2c],EAX                ; 005ed821 | int g_RedBitCount
    XOR ECX,ECX                         ; 005ed826
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ed828
    TEST DH,0x1                         ; 005ed82c
    JNZ 0x005ed840                      ; 005ed82f | LAB_005ed840
        ;   XREF to: 005ed840 (CONDITIONAL_JUMP)
    SHR EAX,0x1                         ; 005ed831
        ;   Label: LAB_005ed831
    INC ECX                             ; 005ed833
    TEST AL,0x1                         ; 005ed834
    JZ 0x005ed831                       ; 005ed836 | LAB_005ed831
        ;   XREF to: 005ed831 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005ed838
    MOV EDX,EDX                         ; 005ed83e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ed840
        ;   Label: LAB_005ed840
    MOV dword ptr [0x02d01f30],ECX      ; 005ed844 | int g_GreenBitPosition
    SHR EAX,CL                          ; 005ed84a
    XOR EDX,EDX                         ; 005ed84c
    MOV ECX,EAX                         ; 005ed84e
    MOV EAX,0xff                        ; 005ed850
    DIV ECX                             ; 005ed855
    MOV [0x02d01f34],EAX                ; 005ed857 | int g_GreenScaleFactor
    XOR ECX,ECX                         ; 005ed85c
    TEST EAX,EAX                        ; 005ed85e
    JZ 0x005ed870                       ; 005ed860 | LAB_005ed870
        ;   XREF to: 005ed870 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 005ed862
        ;   Label: LAB_005ed862
    JBE 0x005ed8bc                      ; 005ed865 | LAB_005ed8bc
        ;   XREF to: 005ed8bc (CONDITIONAL_JUMP)
    INC ECX                             ; 005ed867
    SHR EAX,0x1                         ; 005ed868
    JMP 0x005ed862                      ; 005ed86a | LAB_005ed862
        ;   XREF to: 005ed862 (UNCONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 005ed86c
        ;   Label: LAB_005ed86c
    JMP 0x005ed81d                      ; 005ed86e | LAB_005ed81d
        ;   XREF to: 005ed81d (UNCONDITIONAL_JUMP)
    MOV EAX,0x20                        ; 005ed870
        ;   Label: LAB_005ed870
    MOV BL,byte ptr [ESP + 0x60]        ; 005ed875
        ;   Label: LAB_005ed875
    MOV [0x02d01f38],EAX                ; 005ed879 | int g_GreenBitCount
    XOR ECX,ECX                         ; 005ed87e
    MOV EAX,dword ptr [ESP + 0x60]      ; 005ed880
    TEST BL,0x1                         ; 005ed884
    JNZ 0x005ed890                      ; 005ed887 | LAB_005ed890
        ;   XREF to: 005ed890 (CONDITIONAL_JUMP)
    SHR EAX,0x1                         ; 005ed889
        ;   Label: LAB_005ed889
    INC ECX                             ; 005ed88b
    TEST AL,0x1                         ; 005ed88c
    JZ 0x005ed889                       ; 005ed88e | LAB_005ed889
        ;   XREF to: 005ed889 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x60]      ; 005ed890
        ;   Label: LAB_005ed890
    MOV dword ptr [0x02d01f3c],ECX      ; 005ed894 | int g_BlueBitPosition
    SHR EAX,CL                          ; 005ed89a
    XOR EDX,EDX                         ; 005ed89c
    MOV ECX,EAX                         ; 005ed89e
    MOV EAX,0xff                        ; 005ed8a0
    DIV ECX                             ; 005ed8a5
    MOV [0x02d01f40],EAX                ; 005ed8a7 | int g_BlueScaleFactor
    XOR ECX,ECX                         ; 005ed8ac
    TEST EAX,EAX                        ; 005ed8ae
    JZ 0x005ed8c0                       ; 005ed8b0 | LAB_005ed8c0
        ;   XREF to: 005ed8c0 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 005ed8b2
        ;   Label: LAB_005ed8b2
    JBE 0x005ed8d4                      ; 005ed8b5 | LAB_005ed8d4
        ;   XREF to: 005ed8d4 (CONDITIONAL_JUMP)
    INC ECX                             ; 005ed8b7
    SHR EAX,0x1                         ; 005ed8b8
    JMP 0x005ed8b2                      ; 005ed8ba | LAB_005ed8b2
        ;   XREF to: 005ed8b2 (UNCONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 005ed8bc
        ;   Label: LAB_005ed8bc
    JMP 0x005ed875                      ; 005ed8be | LAB_005ed875
        ;   XREF to: 005ed875 (UNCONDITIONAL_JUMP)
    MOV EAX,0x20                        ; 005ed8c0
        ;   Label: LAB_005ed8c0
    MOV [0x02d01f44],EAX                ; 005ed8c5 | int g_BlueBitCount
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0 ; 005ed8ca | void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0()
        ;   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x6c                        ; 005ed8cf
    POP EBX                             ; 005ed8d2
    RET                                 ; 005ed8d3
    MOV EAX,ECX                         ; 005ed8d4
        ;   Label: LAB_005ed8d4
    MOV [0x02d01f44],EAX                ; 005ed8d6 | int g_BlueBitCount
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0 ; 005ed8db | void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0()
        ;   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x6c                        ; 005ed8e0
    POP EBX                             ; 005ed8e3
    RET                                 ; 005ed8e4

