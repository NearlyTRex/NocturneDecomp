; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3d40(void)
;
;
; Called Functions:
;   FUN_004e5bd0
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1cd0e3c                      ; 004e3d40
        ;   Label: FUN_004e3d40
    CALL FUN_004e5bd0                   ; 004e3d45
        ;   XREF to: 004e5bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5bd0()
    ADD ESP,0x4                         ; 004e3d4a
    PUSH 0x61dc84                       ; 004e3d4d
    CALL FUN_005c1093                   ; 004e3d52
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 004e3d57
    PUSH 0x601710                       ; 004e3d5a
    PUSH 0x100                          ; 004e3d5f
    PUSH 0x1cd0eac                      ; 004e3d64
    CALL FUN_005c0357                   ; 004e3d69
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004e3d6e
    PUSH 0x61dc94                       ; 004e3d71
    CALL FUN_005c1093                   ; 004e3d76
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 004e3d7b
    PUSH 0x601730                       ; 004e3d7e
    PUSH 0x7d0                          ; 004e3d83
    PUSH 0x1cd56b4                      ; 004e3d88
    CALL FUN_005c0357                   ; 004e3d8d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004e3d92
    PUSH 0x601750                       ; 004e3d95
    PUSH 0x20                           ; 004e3d9a
    PUSH 0x1cf69fc                      ; 004e3d9c
    CALL FUN_005c0357                   ; 004e3da1
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004e3da6
    PUSH 0x601770                       ; 004e3da9
    PUSH 0x3e8                          ; 004e3dae
    PUSH 0x1cf6f04                      ; 004e3db3
    CALL FUN_005c0357                   ; 004e3db8
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 004e3dbd
    RET                                 ; 004e3dc0

