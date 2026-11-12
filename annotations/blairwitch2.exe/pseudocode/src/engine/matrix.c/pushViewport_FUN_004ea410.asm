; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pushViewport_FUN_004ea410(int x,int y,int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710 at 0046b726
;   shape_edittool.cpp_FUN_0047e870 at 0047eda5
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005dc876
;   TerminatedCString s_Too_many_3D_windows_005dc889
;   undefined4 DAT_006141e4
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;   undefined4 DAT_01c38b84
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ea410
        ;   Label: engine_matrix.c_pushViewport_FUN_004ea410
    MOV EAX,[0x01d05270]                ; 004ea411 | DAT_01d05270
    MOV EDX,dword ptr [0x01c38b78]      ; 004ea416 | DAT_01c38b78
    MOV dword ptr [EAX*0x4 + 0x1d0533c],EDX ; 004ea41c
    MOV EDX,dword ptr [0x01c38b7c]      ; 004ea423 | DAT_01c38b7c
    MOV dword ptr [EAX*0x4 + 0x1d05364],EDX ; 004ea429
    MOV EDX,dword ptr [0x01c38b80]      ; 004ea430 | DAT_01c38b80
    MOV dword ptr [EAX*0x4 + 0x1d0538c],EDX ; 004ea436
    MOV EDX,dword ptr [0x01c38b84]      ; 004ea43d | DAT_01c38b84
    MOV dword ptr [EAX*0x4 + 0x1d053b4],EDX ; 004ea443
    MOV EDX,dword ptr [0x01c38b88]      ; 004ea44a | DAT_01c38b88
    MOV dword ptr [EAX*0x4 + 0x1d053dc],EDX ; 004ea450
    MOV EDX,dword ptr [0x01c38b8c]      ; 004ea457 | DAT_01c38b8c
    MOV dword ptr [EAX*0x4 + 0x1d05404],EDX ; 004ea45d
    MOV EDX,dword ptr [0x01c38b90]      ; 004ea464 | DAT_01c38b90
    MOV dword ptr [EAX*0x4 + 0x1d0542c],EDX ; 004ea46a
    MOV EDX,dword ptr [0x01c38b94]      ; 004ea471 | DAT_01c38b94
    MOV dword ptr [EAX*0x4 + 0x1d05454],EDX ; 004ea477
    MOV EDX,dword ptr [0x01c38b98]      ; 004ea47e | DAT_01c38b98
    MOV dword ptr [EAX*0x4 + 0x1d0547c],EDX ; 004ea484
    MOV EDX,dword ptr [0x01c35e38]      ; 004ea48b | DAT_01c35e38
    MOV dword ptr [EAX*0x4 + 0x1d05274],EDX ; 004ea491
    MOV EDX,dword ptr [0x01c35e3c]      ; 004ea498 | DAT_01c35e3c
    MOV dword ptr [EAX*0x4 + 0x1d0529c],EDX ; 004ea49e
    MOV EDX,dword ptr [0x01c35e40]      ; 004ea4a5 | DAT_01c35e40
    MOV dword ptr [EAX*0x4 + 0x1d052c4],EDX ; 004ea4ab
    MOV EDX,dword ptr [0x01c35e44]      ; 004ea4b2 | DAT_01c35e44
    MOV dword ptr [EAX*0x4 + 0x1d052ec],EDX ; 004ea4b8
    MOV EDX,dword ptr [0x006141e4]      ; 004ea4bf | DAT_006141e4
    MOV dword ptr [EAX*0x4 + 0x1d05314],EDX ; 004ea4c5
    MOV EDX,dword ptr [0x01c35e48]      ; 004ea4cc | DAT_01c35e48
    MOV dword ptr [EAX*0x4 + 0x1d054a4],EDX ; 004ea4d2
    MOV EDX,dword ptr [0x01c35e50]      ; 004ea4d9 | DAT_01c35e50
    MOV dword ptr [EAX*0x4 + 0x1d054cc],EDX ; 004ea4df
    MOV EDX,dword ptr [0x01c35e4c]      ; 004ea4e6 | DAT_01c35e4c
    MOV dword ptr [EAX*0x4 + 0x1d054f4],EDX ; 004ea4ec
    MOV EDX,dword ptr [0x01c35e54]      ; 004ea4f3 | DAT_01c35e54
    MOV dword ptr [EAX*0x4 + 0x1d0551c],EDX ; 004ea4f9
    LEA EDX,[EAX + 0x1]                 ; 004ea500
    MOV dword ptr [0x01d05270],EDX      ; 004ea503 | DAT_01d05270
    CMP EDX,0xa                         ; 004ea509
    JGE 0x004ea541                      ; 004ea50c
        ;   XREF to: 004ea541 (CONDITIONAL_JUMP)  ; LAB_004ea541
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ea50e
        ;   Label: LAB_004ea50e
    ADD EAX,dword ptr [ESP + 0x14]      ; 004ea512
    MOV EBP,dword ptr [ESP + 0x10]      ; 004ea516
    PUSH EAX                            ; 004ea51a
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ea51b
    ADD EAX,EBP                         ; 004ea51f
    PUSH EAX                            ; 004ea521
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ea522
    PUSH EAX                            ; 004ea526
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ea527
    PUSH EDX                            ; 004ea52b
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 004ea52c
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    MOV ECX,0x10000                     ; 004ea531
    ADD ESP,0x10                        ; 004ea536
    MOV dword ptr [0x006141e4],ECX      ; 004ea539 | DAT_006141e4
    POP EBP                             ; 004ea53f
    RET                                 ; 004ea540
    PUSH ESI                            ; 004ea541
        ;   Label: LAB_004ea541
    PUSH EBX                            ; 004ea542
    MOV EBX,0x5dc876                    ; 004ea543 | = "..\\engine\\matrix.c"
    MOV ESI,0x540                       ; 004ea548
    PUSH 0x5dc889                       ; 004ea54d | = "Too many 3D windows"
    MOV dword ptr [0x01d046a0],EBX      ; 004ea552 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004ea558 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004ea55e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004ea563
    POP EBX                             ; 004ea566
    POP ESI                             ; 004ea567
    JMP 0x004ea50e                      ; 004ea568
        ;   XREF to: 004ea50e (UNCONDITIONAL_JUMP)  ; LAB_004ea50e

