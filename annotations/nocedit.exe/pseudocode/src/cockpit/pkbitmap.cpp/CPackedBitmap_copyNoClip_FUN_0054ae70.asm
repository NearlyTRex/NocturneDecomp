; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap * this_ptr, uchar * dest_buffer, int bits_per_pixel, int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   dest_buffer
; int              Stack[0xc]:4   bits_per_pixel
; int              Stack[0x10]:4   row_stride
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0 at 0054afeb
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef00
;   TerminatedCString s_CPackedBitmap_copyNoClip_0063ef18
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
;   cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ae70
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
    PUSH ESI                            ; 0054ae71
    PUSH EDI                            ; 0054ae72
    PUSH EBP                            ; 0054ae73
    SUB ESP,0xc                         ; 0054ae74
    MOV EDI,dword ptr [ESP + 0x24]      ; 0054ae77
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054ae7b
    CMP dword ptr [EAX + 0x20],0x0      ; 0054ae7f
    JZ 0x0054af53                       ; 0054ae83 | LAB_0054af53
        ;   XREF to: 0054af53 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x14],0x0      ; 0054ae89
    JZ 0x0054af53                       ; 0054ae8d | LAB_0054af53
        ;   XREF to: 0054af53 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0054ae93
    JZ 0x0054af53                       ; 0054ae95 | LAB_0054af53
        ;   XREF to: 0054af53 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0054ae9b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0054ae9d
    MOV dword ptr [ESP + 0x4],EBX       ; 0054aea1
    CMP ESI,0x10                        ; 0054aea5
    JNC 0x0054af6f                      ; 0054aea8 | LAB_0054af6f
        ;   XREF to: 0054af6f (CONDITIONAL_JUMP)
    CMP ESI,0x8                         ; 0054aeae
    JNZ 0x0054af76                      ; 0054aeb1 | LAB_0054af76
        ;   XREF to: 0054af76 (CONDITIONAL_JUMP)
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780 ; 0054aeb7 | OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780()
        ;   XREF to: 00431780 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x8],EAX       ; 0054aebc
        ;   Label: LAB_0054aebc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054aec0
        ;   Label: LAB_0054aec0
    MOV EAX,dword ptr [EAX + 0x20]      ; 0054aec4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054aec7
    MOV EBP,dword ptr [EAX]             ; 0054aecb
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054aecd
    MOV EBX,dword ptr [EBX + 0x14]      ; 0054aed1
    SHL EAX,0x2                         ; 0054aed4
    ADD EBX,EBP                         ; 0054aed7
    MOV dword ptr [ESP],EAX             ; 0054aed9
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054aedc
        ;   Label: LAB_0054aedc
    MOV EDX,dword ptr [ESP]             ; 0054aee0
    MOV EAX,dword ptr [EAX + 0x20]      ; 0054aee3
    MOV EBP,dword ptr [ESP + 0x20]      ; 0054aee6
    ADD EAX,EDX                         ; 0054aeea
    MOV EBP,dword ptr [EBP + 0x14]      ; 0054aeec
    ADD EBP,dword ptr [EAX + 0x4]       ; 0054aeef
    CMP EBX,EBP                         ; 0054aef2
    JNC 0x0054af30                      ; 0054aef4 | LAB_0054af30
        ;   XREF to: 0054af30 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0054aef6
        ;   Label: LAB_0054aef6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054aef8
    MOV DX,word ptr [EBX]               ; 0054aefc
    IMUL EDX,EAX                        ; 0054aeff
    MOV EAX,EDX                         ; 0054af02
    SAR EDX,0x1f                        ; 0054af04
    SHL EDX,0x3                         ; 0054af07
    SBB EAX,EDX                         ; 0054af0a
    SAR EAX,0x3                         ; 0054af0c
    XOR ESI,ESI                         ; 0054af0f
    LEA ECX,[EBX + 0x4]                 ; 0054af11
    MOV SI,word ptr [EBX + 0x2]         ; 0054af14
    LEA EBX,[ESI + 0x3]                 ; 0054af18
    PUSH ESI                            ; 0054af1b
    PUSH ECX                            ; 0054af1c
    ADD EAX,EDI                         ; 0054af1d
    AND BL,0xfc                         ; 0054af1f
    PUSH EAX                            ; 0054af22
    ADD EBX,ECX                         ; 0054af23
    CALL dword ptr [ESP + 0x14]         ; 0054af25
    ADD ESP,0xc                         ; 0054af29
    CMP EBX,EBP                         ; 0054af2c
    JC 0x0054aef6                       ; 0054af2e | LAB_0054aef6
        ;   XREF to: 0054aef6 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP]             ; 0054af30
        ;   Label: LAB_0054af30
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054af33
    ADD EDX,0x4                         ; 0054af37
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054af3a
    MOV dword ptr [ESP],EDX             ; 0054af3e
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054af41
    INC ECX                             ; 0054af45
    ADD EDI,ESI                         ; 0054af46
    MOV EBP,dword ptr [EDX + 0x1c]      ; 0054af48
    MOV dword ptr [ESP + 0x4],ECX       ; 0054af4b
    CMP ECX,EBP                         ; 0054af4f
    JL 0x0054aedc                       ; 0054af51 | LAB_0054aedc
        ;   XREF to: 0054aedc (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 0054af53
        ;   Label: LAB_0054af53
    POP EBP                             ; 0054af56
    POP EDI                             ; 0054af57
    POP ESI                             ; 0054af58
    POP EBX                             ; 0054af59
    RET                                 ; 0054af5a
    CALL cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0 ; 0054af5b | ColorConversionFunc * cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0()
        ;   Label: LAB_0054af5b
        ;   XREF to: 004317a0 (UNCONDITIONAL_CALL)
    JMP 0x0054aebc                      ; 0054af60 | LAB_0054aebc
        ;   XREF to: 0054aebc (UNCONDITIONAL_JUMP)
    CALL cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770 ; 0054af65 | ColorConversionFunc * cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770()
        ;   Label: LAB_0054af65
        ;   XREF to: 00431770 (UNCONDITIONAL_CALL)
    JMP 0x0054aebc                      ; 0054af6a | LAB_0054aebc
        ;   XREF to: 0054aebc (UNCONDITIONAL_JUMP)
    JBE 0x0054af5b                      ; 0054af6f | LAB_0054af5b
        ;   Label: LAB_0054af6f
        ;   XREF to: 0054af5b (CONDITIONAL_JUMP)
    CMP ESI,0x20                        ; 0054af71
    JZ 0x0054af65                       ; 0054af74 | LAB_0054af65
        ;   XREF to: 0054af65 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0054af76
        ;   Label: LAB_0054af76
    PUSH ESI                            ; 0054af7a
    MOV ECX,0x63ef00                    ; 0054af7b | = "..\\cockpit\\pkbitmap.cpp" | s_cockpit_pkbitmap_cpp_0063ef00 = ..\cockpit\pkbitmap.cpp
    MOV EBX,0x29e                       ; 0054af80
    PUSH 0x63ef18                       ; 0054af85 | = "CPackedBitmap::copyNoClip - invalid d..." | s_CPackedBitmap_copyNoClip_0063ef18 = CPackedBitmap::copyNoClip - invalid destBitsPerPixel: %d
    MOV dword ptr [0x02f0ca48],ECX      ; 0054af8a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0054af90 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054af96 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054af9b
    JMP 0x0054aec0                      ; 0054af9e | LAB_0054aec0
        ;   XREF to: 0054aec0 (UNCONDITIONAL_JUMP)

