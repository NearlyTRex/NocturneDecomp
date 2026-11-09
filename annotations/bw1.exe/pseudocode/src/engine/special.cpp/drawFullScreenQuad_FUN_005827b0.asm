; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawFullScreenQuad_FUN_005827b0(int color)
;
; Parameters:
; int              Stack[0x4]:4   color
;
; XREF[1]:
;   engine_special.cpp_clearScreenRegion_FUN_0057dd07 at 0057dd18
;
; Referenced Globals:
;   undefined4 DAT_006258dc
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   engine_special.cpp_drawPolygon_FUN_00582340
;
; *****************************************************************************

section .text

    SUB ESP,0xc0                        ; 005827b0
        ;   Label: engine_special.cpp_drawFullScreenQuad_FUN_005827b0
    PUSH 0xc0                           ; 005827b6
    PUSH 0x0                            ; 005827bb
    LEA EAX,[ESP + 0x8]                 ; 005827bd
    PUSH EAX                            ; 005827c1
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005827c2
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EAX,[0x01c4f008]                ; 005827c7 | DAT_01c4f008
    ADD ESP,0xc                         ; 005827cc
    SHL EAX,0x10                        ; 005827cf
    MOV dword ptr [ESP + 0x10],EAX      ; 005827d2
    MOV EAX,[0x01c4f00c]                ; 005827d6 | DAT_01c4f00c
    SHL EAX,0x10                        ; 005827db
    MOV dword ptr [ESP + 0x14],EAX      ; 005827de
    MOV EAX,[0x01c4f010]                ; 005827e2 | DAT_01c4f010
    SHL EAX,0x10                        ; 005827e7
    MOV dword ptr [ESP + 0x40],EAX      ; 005827ea
    MOV EAX,dword ptr [ESP + 0x14]      ; 005827ee
    MOV dword ptr [ESP + 0x44],EAX      ; 005827f2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005827f6
    MOV dword ptr [ESP + 0x70],EAX      ; 005827fa
    MOV EAX,[0x01c4f014]                ; 005827fe | DAT_01c4f014
    SHL EAX,0x10                        ; 00582803
    MOV dword ptr [ESP + 0x74],EAX      ; 00582806
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058280a
    MOV dword ptr [ESP + 0xa0],EAX      ; 0058280e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00582815
    MOV dword ptr [ESP + 0xa4],EAX      ; 00582819
    MOV EAX,[0x006258dc]                ; 00582820 | DAT_006258dc
    PUSH 0x10                           ; 00582825
    MOV dword ptr [ESP + 0xc],EAX       ; 00582827
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058282b
    MOV dword ptr [ESP + 0x6c],EAX      ; 0058282f
    MOV dword ptr [ESP + 0x9c],EAX      ; 00582833
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0058283a
    PUSH 0x4                            ; 00582841
    MOV [0x01c4f020],EAX                ; 00582843 | DAT_01c4f020
    LEA EAX,[ESP + 0x8]                 ; 00582848
    PUSH EAX                            ; 0058284c
    CALL engine_special.cpp_drawPolygon_FUN_00582340 ; 0058284d
        ;   XREF to: 00582340 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon_FUN_00582340()
    MOV EAX,0x1                         ; 00582852
    ADD ESP,0xc                         ; 00582857
    ADD ESP,0xc0                        ; 0058285a
    RET                                 ; 00582860

