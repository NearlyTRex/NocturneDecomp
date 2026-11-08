; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c1066(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[37]:
;   FUN_0040ee30 at 0040ee3c
;   FUN_00418890 at 0041889c
;   FUN_004188b0 at 004188bc
;   FUN_004188d0 at 004188dc
;   FUN_004188f0 at 004188fc
;   FUN_0041b190 at 0041b19c
;   FUN_00423810 at 0042381c
;   FUN_0045dfe0 at 0045dfec
;   FUN_00468990 at 0046899f
;   FUN_004b7870 at 004b787f
;   ... and 27 more
;
; Called Functions:
;   FUN_005c102c
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 005c1066
        ;   Label: FUN_005c1066
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c1069
    MOV dword ptr [ESP],EAX             ; 005c106d
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c1070
    MOV dword ptr [ESP + 0x4],EAX       ; 005c1074
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c1078
    MOV dword ptr [ESP + 0x8],EAX       ; 005c107c
    MOV EAX,ESP                         ; 005c1080
    PUSH EAX                            ; 005c1082
    CALL FUN_005c102c                   ; 005c1083
        ;   XREF to: 005c102c (UNCONDITIONAL_CALL)  ; undefined FUN_005c102c()
    ADD ESP,0x4                         ; 005c1088
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c108b
    ADD ESP,0xc                         ; 005c108f
    RET                                 ; 005c1092

