; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   width
; int              Stack[0x18]:4   height
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_ckptutil.c_blitFullScreen_FUN_00432b30 at 00432b4e
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004326a0
        ;   Label: cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
    PUSH ESI                            ; 004326a1
    PUSH EDI                            ; 004326a2
    PUSH EBP                            ; 004326a3
    SUB ESP,0x28                        ; 004326a4
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004326a7
    MOV EDX,dword ptr [0x02cf6a9c]      ; 004326ab | g_ScreenBufferArray
    MOV EAX,[0x02cf6aa0]                ; 004326b1 | g_ScreenBufferArray[1]
    SUB EAX,EDX                         ; 004326b6
    MOV dword ptr [ESP + 0xc],EAX       ; 004326b8
    TEST EDI,EDI                        ; 004326bc
    JNZ 0x004326c8                      ; 004326be
        ;   XREF to: 004326c8 (CONDITIONAL_JUMP)  ; LAB_004326c8
    ADD ESP,0x28                        ; 004326c0
        ;   Label: LAB_004326c0
    POP EBP                             ; 004326c3
    POP EDI                             ; 004326c4
    POP ESI                             ; 004326c5
    POP EBX                             ; 004326c6
    RET                                 ; 004326c7
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 004326c8
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   Label: LAB_004326c8
    MOV EDX,dword ptr [ESP + 0x50]      ; 004326cd
    MOV ESI,dword ptr [ESP + 0x48]      ; 004326d1
    MOV EBX,EDX                         ; 004326d5
    MOV ECX,dword ptr [0x0067939c]      ; 004326d7 | g_BitsPerPixel
    SHL EBX,0x5                         ; 004326dd
    MOV EBP,EAX                         ; 004326e0
    ADD EBX,EDX                         ; 004326e2
    SHL ESI,0x2                         ; 004326e4
    SHL EBX,0x2                         ; 004326e7
    CMP ECX,0x8                         ; 004326ea
    JNZ 0x00432799                      ; 004326ed
        ;   XREF to: 00432799 (CONDITIONAL_JUMP)  ; LAB_00432799
    MOV EDX,dword ptr [ESP + 0x44]      ; 004326f3
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 004326f7 | g_ScreenBufferArray
    ADD EDX,EAX                         ; 004326fd
    MOV EAX,dword ptr [ESP + 0x50]      ; 004326ff
    MOV dword ptr [ESP + 0x20],EDX      ; 00432703
    TEST EAX,EAX                        ; 00432707
    JLE 0x004326c0                      ; 00432709
        ;   XREF to: 004326c0 (CONDITIONAL_JUMP)  ; LAB_004326c0
    XOR ECX,ECX                         ; 0043270b
    MOV dword ptr [ESP + 0x8],EBX       ; 0043270d
    MOV dword ptr [ESP + 0x10],ECX      ; 00432711
    CMP dword ptr [ESP + 0x40],0x0      ; 00432715
        ;   Label: LAB_00432715
    JZ 0x00432787                       ; 0043271a
        ;   XREF to: 00432787 (CONDITIONAL_JUMP)  ; LAB_00432787
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043271c
    XOR ESI,ESI                         ; 00432720
    XOR EBX,EBX                         ; 00432722
    MOV dword ptr [ESP + 0x1c],EAX      ; 00432724
    MOV EAX,dword ptr [ESP + 0x40]      ; 00432728
        ;   Label: LAB_00432728
    ADD EAX,dword ptr [ESP + 0x1c]      ; 0043272c
    CMP EBX,dword ptr [EAX]             ; 00432730
    JGE 0x00432757                      ; 00432732
        ;   XREF to: 00432757 (CONDITIONAL_JUMP)  ; LAB_00432757
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 00432734
    PUSH EDX                            ; 00432738
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00432739
    ADD EDX,EDI                         ; 0043273d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0043273f
    PUSH EDX                            ; 00432743
    MOV EDX,dword ptr [ESP + 0x28]      ; 00432744
    LEA EAX,[EDX + ECX*0x1]             ; 00432748
    PUSH EAX                            ; 0043274b
    ADD ESI,0x4                         ; 0043274c
    INC EBX                             ; 0043274f
    CALL EBP                            ; 00432750
    ADD ESP,0xc                         ; 00432752
    JMP 0x00432728                      ; 00432755
        ;   XREF to: 00432728 (UNCONDITIONAL_JUMP)  ; LAB_00432728
    MOV EBX,dword ptr [ESP + 0x10]      ; 00432757
        ;   Label: LAB_00432757
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043275b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043275f
    MOV EDX,dword ptr [ESP + 0x8]       ; 00432763
    ADD EBX,0x84                        ; 00432767
    ADD ESI,EAX                         ; 0043276d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043276f
    MOV dword ptr [ESP + 0x10],EBX      ; 00432773
    MOV dword ptr [ESP + 0x20],ESI      ; 00432777
    ADD EDI,EAX                         ; 0043277b
    CMP EBX,EDX                         ; 0043277d
    JGE 0x004326c0                      ; 0043277f
        ;   XREF to: 004326c0 (CONDITIONAL_JUMP)  ; LAB_004326c0
    JMP 0x00432715                      ; 00432785
        ;   XREF to: 00432715 (UNCONDITIONAL_JUMP)  ; LAB_00432715
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00432787
        ;   Label: LAB_00432787
    PUSH ESI                            ; 0043278b
    PUSH EDI                            ; 0043278c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0043278d
    PUSH EAX                            ; 00432791
    CALL EBP                            ; 00432792
    ADD ESP,0xc                         ; 00432794
    JMP 0x00432757                      ; 00432797
        ;   XREF to: 00432757 (UNCONDITIONAL_JUMP)  ; LAB_00432757
    MOV EDX,dword ptr [ESP + 0x44]      ; 00432799
        ;   Label: LAB_00432799
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 0043279d | g_ScreenBufferArray
    ADD EDX,EDX                         ; 004327a3
    ADD EAX,EDX                         ; 004327a5
    MOV dword ptr [ESP + 0x24],EAX      ; 004327a7
    MOV EAX,dword ptr [ESP + 0xc]       ; 004327ab
    MOV EDX,EAX                         ; 004327af
    SAR EDX,0x1f                        ; 004327b1
    SUB EAX,EDX                         ; 004327b4
    SAR EAX,0x1                         ; 004327b6
    MOV ESI,dword ptr [ESP + 0x50]      ; 004327b8
    MOV dword ptr [ESP + 0xc],EAX       ; 004327bc
    TEST ESI,ESI                        ; 004327c0
    JLE 0x004326c0                      ; 004327c2
        ;   XREF to: 004326c0 (CONDITIONAL_JUMP)  ; LAB_004326c0
    ADD EAX,EAX                         ; 004327c8
    MOV dword ptr [ESP],EAX             ; 004327ca
    XOR EAX,EAX                         ; 004327cd
    MOV dword ptr [ESP + 0x4],EBX       ; 004327cf
    MOV dword ptr [ESP + 0x14],EAX      ; 004327d3
    CMP dword ptr [ESP + 0x40],0x0      ; 004327d7
        ;   Label: LAB_004327d7
    JZ 0x00432849                       ; 004327dc
        ;   XREF to: 00432849 (CONDITIONAL_JUMP)  ; LAB_00432849
    MOV EAX,dword ptr [ESP + 0x14]      ; 004327de
    XOR ESI,ESI                         ; 004327e2
    XOR EBX,EBX                         ; 004327e4
    MOV dword ptr [ESP + 0x18],EAX      ; 004327e6
    MOV EAX,dword ptr [ESP + 0x40]      ; 004327ea
        ;   Label: LAB_004327ea
    ADD EAX,dword ptr [ESP + 0x18]      ; 004327ee
    CMP EBX,dword ptr [EAX]             ; 004327f2
    JGE 0x0043281a                      ; 004327f4
        ;   XREF to: 0043281a (CONDITIONAL_JUMP)  ; LAB_0043281a
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x44] ; 004327f6
    MOV ECX,dword ptr [ESP + 0x24]      ; 004327fa
    PUSH EDX                            ; 004327fe
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4] ; 004327ff
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00432803
    ADD EDX,EDI                         ; 00432807
    ADD EAX,EAX                         ; 00432809
    PUSH EDX                            ; 0043280b
    ADD EAX,ECX                         ; 0043280c
    PUSH EAX                            ; 0043280e
    ADD ESI,0x4                         ; 0043280f
    INC EBX                             ; 00432812
    CALL EBP                            ; 00432813
    ADD ESP,0xc                         ; 00432815
    JMP 0x004327ea                      ; 00432818
        ;   XREF to: 004327ea (UNCONDITIONAL_JUMP)  ; LAB_004327ea
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043281a
        ;   Label: LAB_0043281a
    MOV EAX,dword ptr [ESP]             ; 0043281e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00432821
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00432825
    MOV ESI,dword ptr [ESP + 0x4]       ; 00432829
    ADD EDX,0x84                        ; 0043282d
    ADD ECX,EAX                         ; 00432833
    ADD EDI,EBX                         ; 00432835
    MOV dword ptr [ESP + 0x14],EDX      ; 00432837
    MOV dword ptr [ESP + 0x24],ECX      ; 0043283b
    CMP EDX,ESI                         ; 0043283f
    JGE 0x004326c0                      ; 00432841
        ;   XREF to: 004326c0 (CONDITIONAL_JUMP)  ; LAB_004326c0
    JMP 0x004327d7                      ; 00432847
        ;   XREF to: 004327d7 (UNCONDITIONAL_JUMP)  ; LAB_004327d7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00432849
        ;   Label: LAB_00432849
    PUSH ECX                            ; 0043284d
    PUSH EDI                            ; 0043284e
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043284f
    PUSH EBX                            ; 00432853
    CALL EBP                            ; 00432854
    ADD ESP,0xc                         ; 00432856
    JMP 0x0043281a                      ; 00432859
        ;   XREF to: 0043281a (UNCONDITIONAL_JUMP)  ; LAB_0043281a

