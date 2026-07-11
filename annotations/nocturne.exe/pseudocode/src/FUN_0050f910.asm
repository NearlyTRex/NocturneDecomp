; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0050f910(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0052c9d0 at 0052cfaf
;
; Referenced Globals:
;   undefined4 DAT_00590a15
;   undefined4 DAT_00590a19
;   undefined4 DAT_01fba938
;
; Called Functions:
;   FUN_00467a00
;   FUN_0050ffe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f910
        ;   Label: FUN_0050f910
    PUSH EBP                            ; 0050f911
    MOV EBP,ESP                         ; 0050f912
    SUB ESP,0x24                        ; 0050f914
    AND ESP,0xfffffff8                  ; 0050f917
    MOV EBX,dword ptr [EBP + 0xc]       ; 0050f91a
    MOV EDX,dword ptr [EBP + 0x10]      ; 0050f91d
    LEA EAX,[ESP + 0x10]                ; 0050f920
    CMP EAX,EDX                         ; 0050f924
    JNZ 0x0050fa0f                      ; 0050f926
        ;   XREF to: 0050fa0f (CONDITIONAL_JUMP)  ; LAB_0050fa0f
    LEA EAX,[ESP + 0x4]                 ; 0050f92c
        ;   Label: LAB_0050f92c
    CMP EAX,EDX                         ; 0050f930
    JZ 0x0050f948                       ; 0050f932
        ;   XREF to: 0050f948 (CONDITIONAL_JUMP)  ; LAB_0050f948
    MOV EAX,dword ptr [EDX]             ; 0050f934
    MOV dword ptr [ESP + 0x4],EAX       ; 0050f936
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050f93a
    MOV dword ptr [ESP + 0x8],EAX       ; 0050f93d
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050f941
    MOV dword ptr [ESP + 0xc],EAX       ; 0050f944
    LEA EAX,[EBX + 0x14cd4c]            ; 0050f948
        ;   Label: LAB_0050f948
    FLD float ptr [ESP + 0x14]          ; 0050f94e
    PUSH EAX                            ; 0050f952
    LEA EAX,[EBX + 0x14cd40]            ; 0050f953
    FLD float ptr [ESP + 0xc]           ; 0050f959
    PUSH EAX                            ; 0050f95d
    LEA EAX,[ESP + 0xc]                 ; 0050f95e
    FXCH                                ; 0050f962
    FADD float ptr [0x00590a15]         ; 0050f964 | DAT_00590a15
    PUSH EAX                            ; 0050f96a
    LEA EAX,[ESP + 0x1c]                ; 0050f96b
    FXCH                                ; 0050f96f
    FADD float ptr [0x00590a19]         ; 0050f971 | DAT_00590a19
    PUSH EAX                            ; 0050f977
    FXCH                                ; 0050f978
    FSTP float ptr [ESP + 0x24]         ; 0050f97a
    PUSH 0x1fba938                      ; 0050f97e | DAT_01fba938
    FSTP float ptr [ESP + 0x1c]         ; 0050f983
    CALL FUN_00467a00                   ; 0050f987
        ;   XREF to: 00467a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00467a00()
    MOV dword ptr [ESP + 0x34],EAX      ; 0050f98c
    FLD float ptr [ESP + 0x34]          ; 0050f990
    ADD ESP,0x14                        ; 0050f994
    FST float ptr [ESP]                 ; 0050f997
    FLDZ                                ; 0050f99a
    FCOMPP                              ; 0050f99c
    FNSTSW AX                           ; 0050f99e
    SAHF                                ; 0050f9a0
    JBE 0x0050f9aa                      ; 0050f9a1
        ;   XREF to: 0050f9aa (CONDITIONAL_JUMP)  ; LAB_0050f9aa
    MOV dword ptr [ESP],0x3f8147ae      ; 0050f9a3
    FLD float ptr [ESP]                 ; 0050f9aa
        ;   Label: LAB_0050f9aa
    FLD1                                ; 0050f9ad
    FCOMPP                              ; 0050f9af
    FNSTSW AX                           ; 0050f9b1
    SAHF                                ; 0050f9b3
    JBE 0x0050f9cb                      ; 0050f9b4
        ;   XREF to: 0050f9cb (CONDITIONAL_JUMP)  ; LAB_0050f9cb
    CMP dword ptr [EBX + 0x14cd4c],0x0  ; 0050f9b6
    JNZ 0x0050f9cb                      ; 0050f9bd
        ;   XREF to: 0050f9cb (CONDITIONAL_JUMP)  ; LAB_0050f9cb
    MOV EAX,dword ptr [EBX + 0x15f294]  ; 0050f9bf
    MOV dword ptr [EBX + 0x14cd4c],EAX  ; 0050f9c5
    LEA EAX,[ESP + 0x4]                 ; 0050f9cb
        ;   Label: LAB_0050f9cb
    PUSH dword ptr [ESP]                ; 0050f9cf
    PUSH EAX                            ; 0050f9d2
    LEA EAX,[ESP + 0x18]                ; 0050f9d3
    PUSH EAX                            ; 0050f9d7
    PUSH 0xbf800000                     ; 0050f9d8
    PUSH EBX                            ; 0050f9dd
    CALL FUN_0050ffe0                   ; 0050f9de
        ;   XREF to: 0050ffe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ffe0()
    MOV dword ptr [ESP + 0x34],EAX      ; 0050f9e3
    FLD float ptr [ESP + 0x34]          ; 0050f9e7
    ADD ESP,0x14                        ; 0050f9eb
    FLD float ptr [ESP + 0x8]           ; 0050f9ee
    FSUB float ptr [ESP + 0x14]         ; 0050f9f2
    FXCH                                ; 0050f9f6
    FSTP float ptr [ESP]                ; 0050f9f8
    FMUL float ptr [ESP]                ; 0050f9fb
    FADD float ptr [ESP + 0x14]         ; 0050f9fe
    FSTP float ptr [ESP + 0x1c]         ; 0050fa02
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050fa06
    MOV ESP,EBP                         ; 0050fa0a
    POP EBP                             ; 0050fa0c
    POP EBX                             ; 0050fa0d
    RET                                 ; 0050fa0e
    MOV EAX,dword ptr [EDX]             ; 0050fa0f
        ;   Label: LAB_0050fa0f
    MOV dword ptr [ESP + 0x10],EAX      ; 0050fa11
    MOV EAX,dword ptr [EDX + 0x4]       ; 0050fa15
    MOV dword ptr [ESP + 0x14],EAX      ; 0050fa18
    MOV EAX,dword ptr [EDX + 0x8]       ; 0050fa1c
    MOV dword ptr [ESP + 0x18],EAX      ; 0050fa1f
    JMP 0x0050f92c                      ; 0050fa23
        ;   XREF to: 0050f92c (UNCONDITIONAL_JUMP)  ; LAB_0050f92c

