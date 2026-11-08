; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00584390(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00584380 at 00584385
;
; Referenced Globals:
;   undefined4 DAT_006258fc
;   undefined4 DAT_00625900
;   undefined4 DAT_02c83550
;   undefined4 DAT_02c83554
;
; Called Functions:
;   FUN_005843f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584390
        ;   Label: FUN_00584390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00584391
    FLD float ptr [0x006258fc]          ; 00584395 | DAT_006258fc
    FLD float ptr [0x00625900]          ; 0058439b | DAT_00625900
    FLD float ptr [0x02c83550]          ; 005843a1 | DAT_02c83550
    LEA EAX,[EBX + 0x18]                ; 005843a7
    FLD float ptr [0x02c83554]          ; 005843aa | DAT_02c83554
    MOV dword ptr [EAX + 0x8],0x0       ; 005843b0
    PUSH 0x1f                           ; 005843b7
    MOV EDX,dword ptr [EAX + 0x8]       ; 005843b9
    MOV dword ptr [EAX + 0x4],EDX       ; 005843bc
    MOV EDX,dword ptr [EAX + 0x4]       ; 005843bf
    MOV dword ptr [EAX],EDX             ; 005843c2
    MOV dword ptr [EBX + 0x10],0x0      ; 005843c4
    PUSH EBX                            ; 005843cb
    FXCH ST3                            ; 005843cc
    FSTP float ptr [EBX]                ; 005843ce
    FXCH                                ; 005843d0
    FSTP float ptr [EBX + 0x4]          ; 005843d2
    FSTP float ptr [EBX + 0x8]          ; 005843d5
    FSTP float ptr [EBX + 0xc]          ; 005843d8
    MOV dword ptr [EBX + 0x14],0x0      ; 005843db
    CALL FUN_005843f0                   ; 005843e2
        ;   XREF to: 005843f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005843f0()
    ADD ESP,0x8                         ; 005843e7
    MOV EAX,EBX                         ; 005843ea
    POP EBX                             ; 005843ec
    RET                                 ; 005843ed

