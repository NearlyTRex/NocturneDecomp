; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stairs_cpp_CStairs_customRayIntersect_FUN_00534960(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dtri.cpp_rayTriangleIntersection_FUN_0046c620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534960
        ;   Label: core_stairs.cpp_CStairs_customRayIntersect_FUN_00534960
    PUSH ESI                            ; 00534961
    PUSH EDI                            ; 00534962
    PUSH EBP                            ; 00534963
    MOV EBP,ESP                         ; 00534964
    SUB ESP,0x20                        ; 00534966
    AND ESP,0xfffffff8                  ; 00534969
    MOV ESI,dword ptr [EBP + 0x20]      ; 0053496c
    MOV EDX,0x3f8147ae                  ; 0053496f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00534974
    XOR EDI,EDI                         ; 00534977
    MOV dword ptr [ESP + 0x18],EDX      ; 00534979
    ADD EBX,0x168                       ; 0053497d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00534983
        ;   Label: LAB_00534983
    MOV EAX,dword ptr [EAX + 0x164]     ; 00534986
    ADD EAX,EAX                         ; 0053498c
    CMP EDI,EAX                         ; 0053498e
    JL 0x0053499d                       ; 00534990
        ;   XREF to: 0053499d (CONDITIONAL_JUMP)  ; LAB_0053499d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00534992
    MOV ESP,EBP                         ; 00534996
    POP EBP                             ; 00534998
    POP EDI                             ; 00534999
    POP ESI                             ; 0053499a
    POP EBX                             ; 0053499b
    RET                                 ; 0053499c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0053499d
        ;   Label: LAB_0053499d
    PUSH ECX                            ; 005349a0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005349a1
    PUSH EAX                            ; 005349a4
    PUSH EBX                            ; 005349a5
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0046c620 ; 005349a6
        ;   XREF to: 0046c620 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0046c620()
    MOV dword ptr [ESP + 0x28],EAX      ; 005349ab
    FLD float ptr [ESP + 0x28]          ; 005349af
    ADD ESP,0xc                         ; 005349b3
    FLDZ                                ; 005349b6
    FXCH                                ; 005349b8
    FST float ptr [ESP + 0x8]           ; 005349ba
    FSTP double ptr [ESP]               ; 005349be
    FCOMP double ptr [ESP]              ; 005349c1
    FNSTSW AX                           ; 005349c4
    SAHF                                ; 005349c6
    JA 0x00534a21                       ; 005349c7
        ;   XREF to: 00534a21 (CONDITIONAL_JUMP)  ; LAB_00534a21
    FLD float ptr [ESP + 0x8]           ; 005349c9
    FCOMP float ptr [ESP + 0x18]        ; 005349cd
    FNSTSW AX                           ; 005349d1
    SAHF                                ; 005349d3
    JNC 0x00534a21                      ; 005349d4
        ;   XREF to: 00534a21 (CONDITIONAL_JUMP)  ; LAB_00534a21
    FLD1                                ; 005349d6
    FCOMP double ptr [ESP]              ; 005349d8
    FNSTSW AX                           ; 005349db
    SAHF                                ; 005349dd
    JC 0x00534a21                       ; 005349de
        ;   XREF to: 00534a21 (CONDITIONAL_JUMP)  ; LAB_00534a21
    MOV EAX,dword ptr [ESP + 0x8]       ; 005349e0
    MOV dword ptr [ESP + 0x18],EAX      ; 005349e4
    LEA EAX,[EBX + 0x24]                ; 005349e8
    FLD float ptr [EAX]                 ; 005349eb
    FCHS                                ; 005349ed
    FSTP float ptr [ESP + 0xc]          ; 005349ef
    FLD float ptr [EAX + 0x4]           ; 005349f3
    FCHS                                ; 005349f6
    FSTP float ptr [ESP + 0x10]         ; 005349f8
    FLD float ptr [EAX + 0x8]           ; 005349fc
    FCHS                                ; 005349ff
    LEA EAX,[ESP + 0xc]                 ; 00534a01
    FSTP float ptr [ESP + 0x14]         ; 00534a05
    CMP ESI,EAX                         ; 00534a09
    JZ 0x00534a21                       ; 00534a0b
        ;   XREF to: 00534a21 (CONDITIONAL_JUMP)  ; LAB_00534a21
    MOV EAX,dword ptr [ESP + 0xc]       ; 00534a0d
    MOV dword ptr [ESI],EAX             ; 00534a11
    MOV EAX,dword ptr [ESP + 0x10]      ; 00534a13
    MOV dword ptr [ESI + 0x4],EAX       ; 00534a17
    MOV EAX,dword ptr [ESP + 0x14]      ; 00534a1a
    MOV dword ptr [ESI + 0x8],EAX       ; 00534a1e
    INC EDI                             ; 00534a21
        ;   Label: LAB_00534a21
    ADD EBX,0x38                        ; 00534a22
    JMP 0x00534983                      ; 00534a25
        ;   XREF to: 00534983 (UNCONDITIONAL_JUMP)  ; LAB_00534983

