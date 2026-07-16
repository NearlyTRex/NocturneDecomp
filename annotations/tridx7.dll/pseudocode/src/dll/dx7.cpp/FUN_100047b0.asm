; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_100047b0(void)
;
;
; XREF[7]:
;   dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130 at 10005267
;   dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00 at 10004ff7
;   dll_dx7.cpp_APIDLLdrawPolygon2_FUN_100043c0 at 1000448d
;   dll_dx7.cpp_APIDLLendScene_FUN_10002d10 at 10002d21
;   dll_dx7.cpp_APIDLLsync_FUN_10004a60 at 10004a60
;   dll_dx7.cpp_FUN_100037e0 at 10003810
;   dll_dx7.cpp_FUN_10003f10 at 10003f3b
;
; Referenced Globals:
;   IDirect3DDevice3* g_Device = 00000000
;   int g_InScene = 0x0
;   undefined4 DAT_10014228
;   undefined4 DAT_1001422c
;   undefined4 DAT_1013b8d8
;   undefined4 DAT_10238910
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 100047b0 | g_InScene
        ;   Label: dll_dx7.cpp_FUN_100047b0
    PUSH ESI                            ; 100047b7
    JZ 0x100047fd                       ; 100047b8
        ;   XREF to: 100047fd (CONDITIONAL_JUMP)  ; LAB_100047fd
    MOV EAX,[0x10014228]                ; 100047ba | DAT_10014228
    TEST EAX,EAX                        ; 100047bf
    JZ 0x100047fd                       ; 100047c1
        ;   XREF to: 100047fd (CONDITIONAL_JUMP)  ; LAB_100047fd
    PUSH 0x1c                           ; 100047c3
    MOV ECX,dword ptr [0x1001422c]      ; 100047c5 | DAT_1001422c
    PUSH ECX                            ; 100047cb
    PUSH 0x10238910                     ; 100047cc | DAT_10238910
    PUSH EAX                            ; 100047d1
    PUSH 0x1013b8d8                     ; 100047d2 | DAT_1013b8d8
    PUSH 0x1c4                          ; 100047d7
    MOV EAX,[0x100141e0]                ; 100047dc | g_Device
    MOV ESI,dword ptr [EAX]             ; 100047e1
    PUSH 0x4                            ; 100047e3
    PUSH EAX                            ; 100047e5
    CALL dword ptr [ESI + 0x74]         ; 100047e6
    MOV dword ptr [0x10014228],0x0      ; 100047e9 | DAT_10014228
    MOV dword ptr [0x1001422c],0x0      ; 100047f3 | DAT_1001422c
    POP ESI                             ; 100047fd
        ;   Label: LAB_100047fd
    RET                                 ; 100047fe

