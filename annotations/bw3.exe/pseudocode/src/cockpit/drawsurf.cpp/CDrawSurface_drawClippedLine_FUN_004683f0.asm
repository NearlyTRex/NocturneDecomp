; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_004683f0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046a836
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00468870
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00468530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004683f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0
    PUSH ESI                            ; 004683f1
    PUSH EDI                            ; 004683f2
    PUSH EBP                            ; 004683f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004683f4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004683f8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004683fc
    ADD EDX,EAX                         ; 004683ff
    MOV dword ptr [ESP + 0x18],EDX      ; 00468401
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00468405
    MOV EAX,dword ptr [EBX + 0xc]       ; 00468409
    ADD ECX,EAX                         ; 0046840c
    MOV dword ptr [ESP + 0x1c],ECX      ; 0046840e
    MOV ESI,dword ptr [ESP + 0x20]      ; 00468412
    MOV EAX,dword ptr [EBX + 0x8]       ; 00468416
    ADD ESI,EAX                         ; 00468419
    MOV dword ptr [ESP + 0x20],ESI      ; 0046841b
    MOV EDI,dword ptr [ESP + 0x24]      ; 0046841f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00468423
    ADD EDI,EAX                         ; 00468426
    MOV dword ptr [ESP + 0x24],EDI      ; 00468428
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0046842c
    PUSH EBP                            ; 0046842f
    MOV EAX,dword ptr [EBX + 0x18]      ; 00468430
    PUSH EAX                            ; 00468433
    MOV EDX,dword ptr [EBX + 0x14]      ; 00468434
    PUSH EDX                            ; 00468437
    MOV ECX,dword ptr [EBX + 0x10]      ; 00468438
    PUSH ECX                            ; 0046843b
    LEA EAX,[ESP + 0x34]                ; 0046843c
    PUSH EAX                            ; 00468440
    LEA EAX,[ESP + 0x34]                ; 00468441
    PUSH EAX                            ; 00468445
    LEA EAX,[ESP + 0x34]                ; 00468446
    PUSH EAX                            ; 0046844a
    LEA EAX,[ESP + 0x34]                ; 0046844b
    PUSH EAX                            ; 0046844f
    PUSH EBX                            ; 00468450
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00468870 ; 00468451
        ;   XREF to: 00468870 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00468870(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
    ADD ESP,0x24                        ; 00468456
    TEST EAX,EAX                        ; 00468459
    JNZ 0x00468462                      ; 0046845b
        ;   XREF to: 00468462 (CONDITIONAL_JUMP)  ; LAB_00468462
    POP EBP                             ; 0046845d
    POP EDI                             ; 0046845e
    POP ESI                             ; 0046845f
    POP EBX                             ; 00468460
    RET                                 ; 00468461
    MOV ESI,dword ptr [ESP + 0x24]      ; 00468462
        ;   Label: LAB_00468462
    PUSH ESI                            ; 00468466
    MOV EDI,dword ptr [ESP + 0x24]      ; 00468467
    PUSH EDI                            ; 0046846b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0046846c
    PUSH EBP                            ; 00468470
    MOV EAX,dword ptr [ESP + 0x24]      ; 00468471
    PUSH EAX                            ; 00468475
    PUSH EBX                            ; 00468476
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00468530 ; 00468477
        ;   XREF to: 00468530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00468530(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0046847c
    POP EBP                             ; 0046847f
    POP EDI                             ; 00468480
    POP ESI                             ; 00468481
    POP EBX                             ; 00468482
    RET                                 ; 00468483

