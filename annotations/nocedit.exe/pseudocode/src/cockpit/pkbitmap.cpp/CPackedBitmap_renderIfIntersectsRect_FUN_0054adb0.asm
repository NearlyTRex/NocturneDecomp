; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right,int rect_bottom)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   rect_left
; int              Stack[0x14]:4   rect_top
; int              Stack[0x18]:4   rect_right
; int              Stack[0x1c]:4   rect_bottom
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90 at 00488cc1
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054adb0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
    PUSH ESI                            ; 0054adb1
    PUSH EDI                            ; 0054adb2
    PUSH EBP                            ; 0054adb3
    SUB ESP,0x8                         ; 0054adb4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054adb7
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054adbb
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054adbf
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054adc3
    CMP dword ptr [EAX + 0x20],0x0      ; 0054adc7
    JZ 0x0054ae5d                       ; 0054adcb
        ;   XREF to: 0054ae5d (CONDITIONAL_JUMP)  ; LAB_0054ae5d
    CMP dword ptr [EAX + 0x14],0x0      ; 0054add1
    JZ 0x0054ae5d                       ; 0054add5
        ;   XREF to: 0054ae5d (CONDITIONAL_JUMP)  ; LAB_0054ae5d
    CMP EDX,dword ptr [ESP + 0x30]      ; 0054addb
    JG 0x0054ae5d                       ; 0054addf
        ;   XREF to: 0054ae5d (CONDITIONAL_JUMP)  ; LAB_0054ae5d
    CMP ECX,dword ptr [ESP + 0x34]      ; 0054ade5
    JG 0x0054ae5d                       ; 0054ade9
        ;   XREF to: 0054ae5d (CONDITIONAL_JUMP)  ; LAB_0054ae5d
    MOV EDI,dword ptr [EAX + 0x18]      ; 0054adef
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0054adf2
    ADD EDI,EDX                         ; 0054adf5
    ADD EBX,ECX                         ; 0054adf7
    DEC EDI                             ; 0054adf9
    DEC EBX                             ; 0054adfa
    CMP EDI,ESI                         ; 0054adfb
    JL 0x0054ae5d                       ; 0054adfd
        ;   XREF to: 0054ae5d (CONDITIONAL_JUMP)  ; LAB_0054ae5d
    CMP EBX,dword ptr [ESP + 0x2c]      ; 0054adff
    JL 0x0054ae5d                       ; 0054ae03
        ;   XREF to: 0054ae5d (CONDITIONAL_JUMP)  ; LAB_0054ae5d
    XOR EBP,EBP                         ; 0054ae05
    MOV dword ptr [ESP],EBP             ; 0054ae07
    CMP EDX,ESI                         ; 0054ae0a
    JL 0x0054ae65                       ; 0054ae0c
        ;   XREF to: 0054ae65 (CONDITIONAL_JUMP)  ; LAB_0054ae65
    XOR ESI,ESI                         ; 0054ae0e
        ;   Label: LAB_0054ae0e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0054ae10
    MOV dword ptr [ESP + 0x4],ESI       ; 0054ae14
    CMP ECX,EBP                         ; 0054ae18
    JGE 0x0054ae26                      ; 0054ae1a
        ;   XREF to: 0054ae26 (CONDITIONAL_JUMP)  ; LAB_0054ae26
    MOV ESI,EBP                         ; 0054ae1c
    SUB ESI,ECX                         ; 0054ae1e
    MOV ECX,EBP                         ; 0054ae20
    MOV dword ptr [ESP + 0x4],ESI       ; 0054ae22
    MOV ESI,dword ptr [EAX + 0x18]      ; 0054ae26
        ;   Label: LAB_0054ae26
    MOV EBP,dword ptr [ESP + 0x30]      ; 0054ae29
    DEC ESI                             ; 0054ae2d
    CMP EDI,EBP                         ; 0054ae2e
    JLE 0x0054ae36                      ; 0054ae30
        ;   XREF to: 0054ae36 (CONDITIONAL_JUMP)  ; LAB_0054ae36
    SUB EDI,EBP                         ; 0054ae32
    SUB ESI,EDI                         ; 0054ae34
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0054ae36
        ;   Label: LAB_0054ae36
    MOV EBP,dword ptr [ESP + 0x34]      ; 0054ae39
    DEC EDI                             ; 0054ae3d
    CMP EBX,EBP                         ; 0054ae3e
    JLE 0x0054ae46                      ; 0054ae40
        ;   XREF to: 0054ae46 (CONDITIONAL_JUMP)  ; LAB_0054ae46
    SUB EBX,EBP                         ; 0054ae42
    SUB EDI,EBX                         ; 0054ae44
    PUSH EDI                            ; 0054ae46
        ;   Label: LAB_0054ae46
    PUSH ESI                            ; 0054ae47
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054ae48
    PUSH EBX                            ; 0054ae4c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054ae4d
    PUSH ESI                            ; 0054ae51
    PUSH ECX                            ; 0054ae52
    PUSH EDX                            ; 0054ae53
    PUSH EAX                            ; 0054ae54
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0 ; 0054ae55
        ;   XREF to: 0054acb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, ...)
    ADD ESP,0x1c                        ; 0054ae5a
    ADD ESP,0x8                         ; 0054ae5d
        ;   Label: LAB_0054ae5d
    POP EBP                             ; 0054ae60
    POP EDI                             ; 0054ae61
    POP ESI                             ; 0054ae62
    POP EBX                             ; 0054ae63
    RET                                 ; 0054ae64
    MOV EBP,ESI                         ; 0054ae65
        ;   Label: LAB_0054ae65
    SUB EBP,EDX                         ; 0054ae67
    MOV EDX,ESI                         ; 0054ae69
    MOV dword ptr [ESP],EBP             ; 0054ae6b
    JMP 0x0054ae0e                      ; 0054ae6e
        ;   XREF to: 0054ae0e (UNCONDITIONAL_JUMP)  ; LAB_0054ae0e

