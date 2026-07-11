; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce920(void)
;
;
; XREF[2]:
;   FUN_004722b0 at 00472383
;   thunk_FUN_004ce920 at 00460e70
;
; Referenced Globals:
;   string s_..\\engine\\matrix.c_005882ea
;   string s_3D_Window_unbalance_005882fd
;   undefined4 DAT_005b7648
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c039c4
;   undefined4 DAT_01c039c8
;   undefined4 DAT_01c039cc
;   undefined4 DAT_01c039d0
;   ... and 8 more
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cc53d0]      ; 004ce920 | DAT_01cc53d0
        ;   Label: FUN_004ce920
    DEC EDX                             ; 004ce926
    MOV dword ptr [0x01cc53d0],EDX      ; 004ce927 | DAT_01cc53d0
    TEST EDX,EDX                        ; 004ce92d
    JL 0x004cea24                       ; 004ce92f
        ;   XREF to: 004cea24 (CONDITIONAL_JUMP)  ; LAB_004cea24
    MOV EAX,[0x01cc53d0]                ; 004ce935 | DAT_01cc53d0
        ;   Label: LAB_004ce935
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc549c] ; 004ce93a
    MOV dword ptr [0x01c039c4],EDX      ; 004ce941 | DAT_01c039c4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc54c4] ; 004ce947
    MOV dword ptr [0x01c039c8],EDX      ; 004ce94e | DAT_01c039c8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc54ec] ; 004ce954
    MOV dword ptr [0x01c039cc],EDX      ; 004ce95b | DAT_01c039cc
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5514] ; 004ce961
    MOV dword ptr [0x01c039d0],EDX      ; 004ce968 | DAT_01c039d0
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc553c] ; 004ce96e
    MOV dword ptr [0x01c039d4],EDX      ; 004ce975 | DAT_01c039d4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5564] ; 004ce97b
    MOV dword ptr [0x01c039d8],EDX      ; 004ce982 | DAT_01c039d8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc558c] ; 004ce988
    MOV dword ptr [0x01c039dc],EDX      ; 004ce98f | DAT_01c039dc
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc55b4] ; 004ce995
    MOV dword ptr [0x01c039e0],EDX      ; 004ce99c | DAT_01c039e0
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc55dc] ; 004ce9a2
    MOV dword ptr [0x01c039e4],EDX      ; 004ce9a9 | DAT_01c039e4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc53d4] ; 004ce9af
    MOV dword ptr [0x01c00c48],EDX      ; 004ce9b6 | DAT_01c00c48
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc53fc] ; 004ce9bc
    MOV dword ptr [0x01c00c4c],EDX      ; 004ce9c3 | DAT_01c00c4c
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5424] ; 004ce9c9
    MOV dword ptr [0x01c00c50],EDX      ; 004ce9d0 | DAT_01c00c50
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc544c] ; 004ce9d6
    MOV dword ptr [0x01c00c54],EDX      ; 004ce9dd | DAT_01c00c54
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5474] ; 004ce9e3
    MOV dword ptr [0x005b7648],EDX      ; 004ce9ea | DAT_005b7648
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5604] ; 004ce9f0
    MOV dword ptr [0x01c00c58],EDX      ; 004ce9f7 | DAT_01c00c58
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc562c] ; 004ce9fd
    MOV dword ptr [0x01c00c60],EDX      ; 004cea04 | DAT_01c00c60
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5654] ; 004cea0a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc567c] ; 004cea11
    MOV dword ptr [0x01c00c5c],EDX      ; 004cea18 | DAT_01c00c5c
    MOV [0x01c00c64],EAX                ; 004cea1e | DAT_01c00c64
    RET                                 ; 004cea23
    PUSH ESI                            ; 004cea24
        ;   Label: LAB_004cea24
    PUSH EBX                            ; 004cea25
    MOV EBX,0x5882ea                    ; 004cea26 | = "..\\engine\\matrix.c"
    MOV ESI,0x569                       ; 004cea2b
    PUSH 0x5882fd                       ; 004cea30 | = "3D Window unbalance"
    MOV dword ptr [0x01cc4800],EBX      ; 004cea35 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004cea3b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004cea41
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004cea46
    POP EBX                             ; 004cea49
    POP ESI                             ; 004cea4a
    JMP 0x004ce935                      ; 004cea4b
        ;   XREF to: 004ce935 (UNCONDITIONAL_JUMP)  ; LAB_004ce935

