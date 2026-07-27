; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045cc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   cockpit_drawsurf.cpp_FUN_0045cce0 at 0045ccf2
;   cockpit_drawsurf.cpp_FUN_0045cd00 at 0045cd60
;   cockpit_drawsurf.cpp_FUN_0045cd80 at 0045cdcc
;
; Referenced Globals:
;   undefined4 DAT_005ae6f4
;   undefined4 DAT_005ae6f8
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045cde0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cc70
        ;   Label: cockpit_drawsurf.cpp_FUN_0045cc70
    PUSH ESI                            ; 0045cc71
    PUSH EDI                            ; 0045cc72
    PUSH EBP                            ; 0045cc73
    SUB ESP,0x8                         ; 0045cc74
    FILD dword ptr [0x005ae6f4]         ; 0045cc77 | DAT_005ae6f4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0045cc7d
    MOV EDX,0x1                         ; 0045cc81
    PUSH EBX                            ; 0045cc86
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045cc87
    MOV EDI,dword ptr [ESP + 0x28]      ; 0045cc8b
    PUSH ESI                            ; 0045cc8f
    MOV EBP,dword ptr [ESP + 0x28]      ; 0045cc90
    MOV EAX,[0x005ae6f8]                ; 0045cc94 | DAT_005ae6f8
    PUSH EDI                            ; 0045cc99
    FSTP float ptr [ESP + 0xc]          ; 0045cc9a
    MOV dword ptr [ESP + 0x10],EAX      ; 0045cc9e
    PUSH EBP                            ; 0045cca2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045cca3
    XOR ECX,ECX                         ; 0045cca7
    PUSH EAX                            ; 0045cca9
    MOV dword ptr [0x005ae6f4],EDX      ; 0045ccaa | DAT_005ae6f4
    MOV dword ptr [0x005ae6f8],ECX      ; 0045ccb0 | DAT_005ae6f8
    CALL cockpit_drawsurf.cpp_FUN_0045cde0 ; 0045ccb6
        ;   XREF to: 0045cde0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045cde0()
    ADD ESP,0x14                        ; 0045ccbb
    FLD float ptr [ESP]                 ; 0045ccbe
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045ccc1
    CALL crt_math.c_round_FUN_00563a30  ; 0045ccc5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [0x005ae6f4]        ; 0045ccca | DAT_005ae6f4
    MOV [0x005ae6f8],EAX                ; 0045ccd0 | DAT_005ae6f8
    ADD ESP,0x8                         ; 0045ccd5
    POP EBP                             ; 0045ccd8
    POP EDI                             ; 0045ccd9
    POP ESI                             ; 0045ccda
    POP EBX                             ; 0045ccdb
    RET                                 ; 0045ccdc

