; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, int src_top, int width, int height)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   src_left
; int              Stack[0x14]:4   src_top
; int              Stack[0x18]:4   width
; int              Stack[0x1c]:4   height
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0 at 0054ae55
;
; Referenced Globals:
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054acb0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
    PUSH ESI                            ; 0054acb1
    PUSH EDI                            ; 0054acb2
    PUSH EBP                            ; 0054acb3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054acb4
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054acb8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0054acbc
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054acc0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054acc4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054acc8
    CMP dword ptr [ECX + 0x20],0x0      ; 0054accc
    JZ 0x0054ad91                       ; 0054acd0
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    CMP dword ptr [ECX + 0x14],0x0      ; 0054acd6
    JZ 0x0054ad91                       ; 0054acda
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    MOV EBP,dword ptr [0x02d02558]      ; 0054ace0 | g_ClipLeft
    CMP EBX,EBP                         ; 0054ace6
    JGE 0x0054acf4                      ; 0054ace8
        ;   XREF to: 0054acf4 (CONDITIONAL_JUMP)  ; LAB_0054acf4
    SUB EBP,EBX                         ; 0054acea
    MOV EBX,dword ptr [0x02d02558]      ; 0054acec | g_ClipLeft
    ADD EDX,EBP                         ; 0054acf2
    MOV EBP,dword ptr [0x02d0255c]      ; 0054acf4 | g_ClipTop
        ;   Label: LAB_0054acf4
    CMP ESI,EBP                         ; 0054acfa
    JGE 0x0054ad08                      ; 0054acfc
        ;   XREF to: 0054ad08 (CONDITIONAL_JUMP)  ; LAB_0054ad08
    SUB EBP,ESI                         ; 0054acfe
    MOV ESI,dword ptr [0x02d0255c]      ; 0054ad00 | g_ClipTop
    ADD EAX,EBP                         ; 0054ad06
    MOV EBP,dword ptr [ESP + 0x28]      ; 0054ad08
        ;   Label: LAB_0054ad08
    ADD EBP,EBX                         ; 0054ad0c
    SUB EBP,EDX                         ; 0054ad0e
    CMP EBP,dword ptr [0x02d02560]      ; 0054ad10 | g_ClipRight
    JLE 0x0054ad26                      ; 0054ad16
        ;   XREF to: 0054ad26 (CONDITIONAL_JUMP)  ; LAB_0054ad26
    MOV EBP,dword ptr [0x02d02560]      ; 0054ad18 | g_ClipRight
    SUB EBP,EBX                         ; 0054ad1e
    ADD EBP,EDX                         ; 0054ad20
    MOV dword ptr [ESP + 0x28],EBP      ; 0054ad22
    LEA EBP,[ESI + EDI*0x1]             ; 0054ad26
        ;   Label: LAB_0054ad26
    SUB EBP,EAX                         ; 0054ad29
    CMP EBP,dword ptr [0x02d02564]      ; 0054ad2b | g_ClipBottom
    JLE 0x0054ad3d                      ; 0054ad31
        ;   XREF to: 0054ad3d (CONDITIONAL_JUMP)  ; LAB_0054ad3d
    MOV EDI,dword ptr [0x02d02564]      ; 0054ad33 | g_ClipBottom
    SUB EDI,ESI                         ; 0054ad39
    ADD EDI,EAX                         ; 0054ad3b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0054ad3d
        ;   Label: LAB_0054ad3d
    CMP EDX,EBP                         ; 0054ad41
    JG 0x0054ad91                       ; 0054ad43
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    CMP EAX,EDI                         ; 0054ad45
    JG 0x0054ad91                       ; 0054ad47
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    TEST EBP,EBP                        ; 0054ad49
    JLE 0x0054ad91                      ; 0054ad4b
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    TEST EDI,EDI                        ; 0054ad4d
    JLE 0x0054ad91                      ; 0054ad4f
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    CMP EDX,dword ptr [ECX + 0x18]      ; 0054ad51
    JGE 0x0054ad91                      ; 0054ad54
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    CMP EAX,dword ptr [ECX + 0x1c]      ; 0054ad56
    JGE 0x0054ad91                      ; 0054ad59
        ;   XREF to: 0054ad91 (CONDITIONAL_JUMP)  ; LAB_0054ad91
    TEST EDX,EDX                        ; 0054ad5b
    JL 0x0054ad96                       ; 0054ad5d
        ;   XREF to: 0054ad96 (CONDITIONAL_JUMP)  ; LAB_0054ad96
    TEST EAX,EAX                        ; 0054ad5f
        ;   Label: LAB_0054ad5f
    JL 0x0054ad9c                       ; 0054ad61
        ;   XREF to: 0054ad9c (CONDITIONAL_JUMP)  ; LAB_0054ad9c
    MOV EBP,dword ptr [ESP + 0x28]      ; 0054ad63
        ;   Label: LAB_0054ad63
    CMP EBP,dword ptr [ECX + 0x18]      ; 0054ad67
    JL 0x0054ad74                       ; 0054ad6a
        ;   XREF to: 0054ad74 (CONDITIONAL_JUMP)  ; LAB_0054ad74
    MOV EBP,dword ptr [ECX + 0x18]      ; 0054ad6c
    DEC EBP                             ; 0054ad6f
    MOV dword ptr [ESP + 0x28],EBP      ; 0054ad70
    MOV EBP,dword ptr [ECX + 0x1c]      ; 0054ad74
        ;   Label: LAB_0054ad74
    CMP EDI,EBP                         ; 0054ad77
    JL 0x0054ad7e                       ; 0054ad79
        ;   XREF to: 0054ad7e (CONDITIONAL_JUMP)  ; LAB_0054ad7e
    LEA EDI,[EBP + -0x1]                ; 0054ad7b
    PUSH EDI                            ; 0054ad7e
        ;   Label: LAB_0054ad7e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054ad7f
    PUSH EDI                            ; 0054ad83
    PUSH EAX                            ; 0054ad84
    PUSH EDX                            ; 0054ad85
    PUSH ESI                            ; 0054ad86
    PUSH EBX                            ; 0054ad87
    PUSH ECX                            ; 0054ad88
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30 ; 0054ad89
        ;   XREF to: 0054ab30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap * this_ptr, int dest_x, int dest_y, int clip_left, ...)
    ADD ESP,0x1c                        ; 0054ad8e
    POP EBP                             ; 0054ad91
        ;   Label: LAB_0054ad91
    POP EDI                             ; 0054ad92
    POP ESI                             ; 0054ad93
    POP EBX                             ; 0054ad94
    RET                                 ; 0054ad95
    SUB EBX,EDX                         ; 0054ad96
        ;   Label: LAB_0054ad96
    XOR EDX,EDX                         ; 0054ad98
    JMP 0x0054ad5f                      ; 0054ad9a
        ;   XREF to: 0054ad5f (UNCONDITIONAL_JUMP)  ; LAB_0054ad5f
    SUB ESI,EAX                         ; 0054ad9c
        ;   Label: LAB_0054ad9c
    XOR EAX,EAX                         ; 0054ad9e
    JMP 0x0054ad63                      ; 0054ada0
        ;   XREF to: 0054ad63 (UNCONDITIONAL_JUMP)  ; LAB_0054ad63

