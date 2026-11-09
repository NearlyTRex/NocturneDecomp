; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00468530(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_004683f0 at 00468477
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468530
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00468530
    PUSH ESI                            ; 00468531
    PUSH EDI                            ; 00468532
    PUSH EBP                            ; 00468533
    SUB ESP,0x10                        ; 00468534
    MOV EDI,dword ptr [ESP + 0x28]      ; 00468537
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046853b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0046853f
    MOV ESI,dword ptr [ESP + 0x34]      ; 00468543
    MOV EDX,0x1                         ; 00468547
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046854c
    MOV dword ptr [ESP],EDX             ; 00468550
    MOV ECX,dword ptr [EAX + 0x8]       ; 00468553
    MOV EDX,dword ptr [EAX + 0xc]       ; 00468556
    SUB EDI,ECX                         ; 00468559
    SUB EBX,EDX                         ; 0046855b
    SUB ESI,EDX                         ; 0046855d
    SUB EBP,ECX                         ; 0046855f
    CMP EBX,ESI                         ; 00468561
    JLE 0x00468571                      ; 00468563
        ;   XREF to: 00468571 (CONDITIONAL_JUMP)  ; LAB_00468571
    MOV EAX,EDI                         ; 00468565
    MOV EDI,EBP                         ; 00468567
    MOV EBP,EAX                         ; 00468569
    MOV EAX,EBX                         ; 0046856b
    MOV EBX,ESI                         ; 0046856d
    MOV ESI,EAX                         ; 0046856f
    SUB ESI,EBX                         ; 00468571
        ;   Label: LAB_00468571
    SUB EBP,EDI                         ; 00468573
    MOV dword ptr [ESP + 0xc],ESI       ; 00468575
    TEST EBP,EBP                        ; 00468579
    JL 0x004685cb                       ; 0046857b
        ;   XREF to: 004685cb (CONDITIONAL_JUMP)  ; LAB_004685cb
    MOV ESI,EDI                         ; 0046857d
        ;   Label: LAB_0046857d
    MOV EDI,dword ptr [ESP + 0xc]       ; 0046857f
    CMP EBP,EDI                         ; 00468583
    JLE 0x004685d7                      ; 00468585
        ;   XREF to: 004685d7 (CONDITIONAL_JUMP)  ; LAB_004685d7
    XOR EAX,EAX                         ; 00468587
    ADD EDI,EDI                         ; 00468589
    MOV dword ptr [ESP + 0x4],EAX       ; 0046858b
    SUB EDI,EBP                         ; 0046858f
    TEST EBP,EBP                        ; 00468591
    JL 0x004685c3                       ; 00468593
        ;   XREF to: 004685c3 (CONDITIONAL_JUMP)  ; LAB_004685c3
    PUSH EBX                            ; 00468595
        ;   Label: LAB_00468595
    PUSH ESI                            ; 00468596
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00468597
    PUSH EDX                            ; 0046859b
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 0046859c
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004685a1
    TEST EDI,EDI                        ; 004685a4
    JLE 0x004685ab                      ; 004685a6
        ;   XREF to: 004685ab (CONDITIONAL_JUMP)  ; LAB_004685ab
    INC EBX                             ; 004685a8
    SUB EDI,EBP                         ; 004685a9
    MOV EAX,dword ptr [ESP]             ; 004685ab
        ;   Label: LAB_004685ab
    MOV ECX,dword ptr [ESP + 0x4]       ; 004685ae
    MOV EDX,dword ptr [ESP + 0xc]       ; 004685b2
    INC ECX                             ; 004685b6
    ADD ESI,EAX                         ; 004685b7
    ADD EDI,EDX                         ; 004685b9
    MOV dword ptr [ESP + 0x4],ECX       ; 004685bb
    CMP EBP,ECX                         ; 004685bf
    JGE 0x00468595                      ; 004685c1
        ;   XREF to: 00468595 (CONDITIONAL_JUMP)  ; LAB_00468595
    ADD ESP,0x10                        ; 004685c3
        ;   Label: LAB_004685c3
    POP EBP                             ; 004685c6
    POP EDI                             ; 004685c7
    POP ESI                             ; 004685c8
    POP EBX                             ; 004685c9
    RET                                 ; 004685ca
    MOV ECX,0xffffffff                  ; 004685cb
        ;   Label: LAB_004685cb
    NEG EBP                             ; 004685d0
    MOV dword ptr [ESP],ECX             ; 004685d2
    JMP 0x0046857d                      ; 004685d5
        ;   XREF to: 0046857d (UNCONDITIONAL_JUMP)  ; LAB_0046857d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004685d7
        ;   Label: LAB_004685d7
    XOR EDX,EDX                         ; 004685db
    LEA EDI,[EBP + EBP*0x1]             ; 004685dd
    MOV dword ptr [ESP + 0x8],EDX       ; 004685e1
    SUB EDI,EAX                         ; 004685e5
    TEST EAX,EAX                        ; 004685e7
    JL 0x004685c3                       ; 004685e9
        ;   XREF to: 004685c3 (CONDITIONAL_JUMP)  ; LAB_004685c3
    PUSH EBX                            ; 004685eb
        ;   Label: LAB_004685eb
    PUSH ESI                            ; 004685ec
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004685ed
    PUSH EAX                            ; 004685f1
    CALL cockpit_drawsurf.cpp_FUN_00467f30 ; 004685f2
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004685f7
    TEST EDI,EDI                        ; 004685fa
    JLE 0x00468609                      ; 004685fc
        ;   XREF to: 00468609 (CONDITIONAL_JUMP)  ; LAB_00468609
    MOV ECX,dword ptr [ESP + 0xc]       ; 004685fe
    MOV EDX,dword ptr [ESP]             ; 00468602
    SUB EDI,ECX                         ; 00468605
    ADD ESI,EDX                         ; 00468607
    MOV EDX,dword ptr [ESP + 0x8]       ; 00468609
        ;   Label: LAB_00468609
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046860d
    INC EBX                             ; 00468611
    INC EDX                             ; 00468612
    ADD EDI,EBP                         ; 00468613
    MOV dword ptr [ESP + 0x8],EDX       ; 00468615
    CMP EDX,ECX                         ; 00468619
    JG 0x004685c3                       ; 0046861b
        ;   XREF to: 004685c3 (CONDITIONAL_JUMP)  ; LAB_004685c3
    JMP 0x004685eb                      ; 0046861d
        ;   XREF to: 004685eb (UNCONDITIONAL_JUMP)  ; LAB_004685eb

