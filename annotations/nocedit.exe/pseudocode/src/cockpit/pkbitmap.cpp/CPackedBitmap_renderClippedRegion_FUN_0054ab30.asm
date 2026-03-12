; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right,int end_row)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   clip_left
; int              Stack[0x14]:4   start_row
; int              Stack[0x18]:4   clip_right
; int              Stack[0x1c]:4   end_row
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0 at 0054ad89
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ab30
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30
    PUSH ESI                            ; 0054ab31
    PUSH EDI                            ; 0054ab32
    PUSH EBP                            ; 0054ab33
    SUB ESP,0x1c                        ; 0054ab34
    MOV EBP,dword ptr [ESP + 0x44]      ; 0054ab37
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054ab3b
    CMP dword ptr [EAX + 0x20],0x0      ; 0054ab3f
    JZ 0x0054ab4b                       ; 0054ab43
        ;   XREF to: 0054ab4b (CONDITIONAL_JUMP)  ; LAB_0054ab4b
    CMP dword ptr [EAX + 0x14],0x0      ; 0054ab45
    JNZ 0x0054ab53                      ; 0054ab49
        ;   XREF to: 0054ab53 (CONDITIONAL_JUMP)  ; LAB_0054ab53
    ADD ESP,0x1c                        ; 0054ab4b
        ;   Label: LAB_0054ab4b
    POP EBP                             ; 0054ab4e
    POP EDI                             ; 0054ab4f
    POP ESI                             ; 0054ab50
    POP EBX                             ; 0054ab51
    RET                                 ; 0054ab52
    MOV EDX,dword ptr [ESP + 0x34]      ; 0054ab53
        ;   Label: LAB_0054ab53
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0054ab57
    MOV ESI,dword ptr [0x0067939c]      ; 0054ab5b | g_BitsPerPixel
    SUB EDX,EBX                         ; 0054ab61
    IMUL EDX,ESI                        ; 0054ab63
    MOV EAX,EDX                         ; 0054ab66
    SAR EDX,0x1f                        ; 0054ab68
    SHL EDX,0x3                         ; 0054ab6b
    SBB EAX,EDX                         ; 0054ab6e
    SAR EAX,0x3                         ; 0054ab70
    MOV dword ptr [ESP],EAX             ; 0054ab73
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 0054ab76
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
    MOV dword ptr [ESP + 0x14],EAX      ; 0054ab7b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054ab7f
    SHL EAX,0x2                         ; 0054ab83
    MOV dword ptr [ESP + 0x8],EAX       ; 0054ab86
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054ab8a
    SHL EAX,0x2                         ; 0054ab8e
    MOV dword ptr [ESP + 0xc],EAX       ; 0054ab91
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054ab95
    SHL EAX,0x2                         ; 0054ab99
    MOV dword ptr [ESP + 0x4],EAX       ; 0054ab9c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0054aba0
        ;   Label: LAB_0054aba0
    MOV EDI,dword ptr [ESP + 0xc]       ; 0054aba4
    MOV EDX,dword ptr [EDX + 0x20]      ; 0054aba8
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054abab
    ADD EDX,EDI                         ; 0054abaf
    MOV EAX,dword ptr [EAX + 0x14]      ; 0054abb1
    MOV EBX,dword ptr [EDX]             ; 0054abb4
    MOV EDX,dword ptr [EDX + 0x4]       ; 0054abb6
    ADD EBX,EAX                         ; 0054abb9
    ADD EDX,EAX                         ; 0054abbb
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054abbd
    MOV dword ptr [ESP + 0x18],EDX      ; 0054abc1
    MOV EDX,dword ptr [ESP]             ; 0054abc5
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 0054abc8 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EAX                         ; 0054abce
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054abd0
    MOV dword ptr [ESP + 0x10],EDX      ; 0054abd4
    CMP EBX,EAX                         ; 0054abd8
    JNC 0x0054abe8                      ; 0054abda
        ;   XREF to: 0054abe8 (CONDITIONAL_JUMP)  ; LAB_0054abe8
        ;   Label: LAB_0054abda
    XOR EAX,EAX                         ; 0054abdc
    MOV AX,word ptr [EBX]               ; 0054abde
    LEA ESI,[EBX + 0x4]                 ; 0054abe1
    CMP EAX,EBP                         ; 0054abe4
    JLE 0x0054ac0c                      ; 0054abe6
        ;   XREF to: 0054ac0c (CONDITIONAL_JUMP)  ; LAB_0054ac0c
    MOV ESI,dword ptr [ESP + 0x8]       ; 0054abe8
        ;   Label: LAB_0054abe8
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054abec
    MOV EDI,dword ptr [ESP + 0x4]       ; 0054abf0
    ADD ESI,0x4                         ; 0054abf4
    ADD EBX,0x4                         ; 0054abf7
    MOV dword ptr [ESP + 0x8],ESI       ; 0054abfa
    MOV dword ptr [ESP + 0xc],EBX       ; 0054abfe
    CMP EBX,EDI                         ; 0054ac02
    JG 0x0054ab4b                       ; 0054ac04
        ;   XREF to: 0054ab4b (CONDITIONAL_JUMP)  ; LAB_0054ab4b
    JMP 0x0054aba0                      ; 0054ac0a
        ;   XREF to: 0054aba0 (UNCONDITIONAL_JUMP)  ; LAB_0054aba0
    XOR ECX,ECX                         ; 0054ac0c
        ;   Label: LAB_0054ac0c
    MOV CX,word ptr [EBX + 0x2]         ; 0054ac0e
    LEA EDX,[ECX + 0x3]                 ; 0054ac12
    LEA EDI,[EAX + ECX*0x1]             ; 0054ac15
    AND DL,0xfc                         ; 0054ac18
    DEC EDI                             ; 0054ac1b
    LEA EBX,[ESI + EDX*0x1]             ; 0054ac1c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0054ac1f
    CMP EDI,EDX                         ; 0054ac23
    JGE 0x0054ac2d                      ; 0054ac25
        ;   XREF to: 0054ac2d (CONDITIONAL_JUMP)  ; LAB_0054ac2d
    CMP EBX,dword ptr [ESP + 0x18]      ; 0054ac27
    JMP 0x0054abda                      ; 0054ac2b
        ;   XREF to: 0054abda (UNCONDITIONAL_JUMP)  ; LAB_0054abda
    CMP EAX,EDX                         ; 0054ac2d
        ;   Label: LAB_0054ac2d
    JL 0x0054ac5f                       ; 0054ac2f
        ;   XREF to: 0054ac5f (CONDITIONAL_JUMP)  ; LAB_0054ac5f
    MOV EDX,dword ptr [0x0067939c]      ; 0054ac31 | g_BitsPerPixel
        ;   Label: LAB_0054ac31
    IMUL EDX,EAX                        ; 0054ac37
    MOV EAX,EDX                         ; 0054ac3a
    SAR EDX,0x1f                        ; 0054ac3c
    SHL EDX,0x3                         ; 0054ac3f
    SBB EAX,EDX                         ; 0054ac42
    SAR EAX,0x3                         ; 0054ac44
    ADD EAX,dword ptr [ESP + 0x10]      ; 0054ac47
    CMP EDI,EBP                         ; 0054ac4b
    JLE 0x0054ac6b                      ; 0054ac4d
        ;   XREF to: 0054ac6b (CONDITIONAL_JUMP)  ; LAB_0054ac6b
    SUB EDI,EBP                         ; 0054ac4f
    SUB ECX,EDI                         ; 0054ac51
    PUSH ECX                            ; 0054ac53
    PUSH ESI                            ; 0054ac54
    PUSH EAX                            ; 0054ac55
    CALL dword ptr [ESP + 0x20]         ; 0054ac56
    ADD ESP,0xc                         ; 0054ac5a
    JMP 0x0054abe8                      ; 0054ac5d
        ;   XREF to: 0054abe8 (UNCONDITIONAL_JUMP)  ; LAB_0054abe8
    SUB EDX,EAX                         ; 0054ac5f
        ;   Label: LAB_0054ac5f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0054ac61
    ADD ESI,EDX                         ; 0054ac65
    SUB ECX,EDX                         ; 0054ac67
    JMP 0x0054ac31                      ; 0054ac69
        ;   XREF to: 0054ac31 (UNCONDITIONAL_JUMP)  ; LAB_0054ac31
    PUSH ECX                            ; 0054ac6b
        ;   Label: LAB_0054ac6b
    PUSH ESI                            ; 0054ac6c
    PUSH EAX                            ; 0054ac6d
    CALL dword ptr [ESP + 0x20]         ; 0054ac6e
    ADD ESP,0xc                         ; 0054ac72
    CMP EBX,dword ptr [ESP + 0x18]      ; 0054ac75
    JNC 0x0054abe8                      ; 0054ac79
        ;   XREF to: 0054abe8 (CONDITIONAL_JUMP)  ; LAB_0054abe8
    XOR EAX,EAX                         ; 0054ac7f
    MOV AX,word ptr [EBX]               ; 0054ac81
    LEA ESI,[EBX + 0x4]                 ; 0054ac84
    CMP EAX,EBP                         ; 0054ac87
    JG 0x0054abe8                       ; 0054ac89
        ;   XREF to: 0054abe8 (CONDITIONAL_JUMP)  ; LAB_0054abe8
    XOR ECX,ECX                         ; 0054ac8f
    MOV CX,word ptr [EBX + 0x2]         ; 0054ac91
    LEA EBX,[ECX + 0x3]                 ; 0054ac95
    LEA EDI,[EAX + ECX*0x1]             ; 0054ac98
    AND BL,0xfc                         ; 0054ac9b
    DEC EDI                             ; 0054ac9e
    ADD EBX,ESI                         ; 0054ac9f
    JMP 0x0054ac31                      ; 0054aca1
        ;   XREF to: 0054ac31 (UNCONDITIONAL_JUMP)  ; LAB_0054ac31

