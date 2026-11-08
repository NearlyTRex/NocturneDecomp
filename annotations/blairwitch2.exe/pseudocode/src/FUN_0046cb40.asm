; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cb40(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_00443af0 at 00443b25
;
; Referenced Globals:
;   undefined4 DAT_006141e4
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046cb40
        ;   Label: FUN_0046cb40
    MOV EDX,dword ptr [EAX]             ; 0046cb44
    MOV dword ptr [0x01c35e38],EDX      ; 0046cb46 | DAT_01c35e38
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046cb4c
    MOV dword ptr [0x01c35e3c],EDX      ; 0046cb4f | DAT_01c35e3c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046cb55
    MOV dword ptr [0x01c35e40],EDX      ; 0046cb58 | DAT_01c35e40
    MOV EDX,dword ptr [EAX + 0xc]       ; 0046cb5e
    MOV dword ptr [0x01c35e44],EDX      ; 0046cb61 | DAT_01c35e44
    MOV EDX,dword ptr [EAX + 0x10]      ; 0046cb67
    MOV dword ptr [0x01c38b78],EDX      ; 0046cb6a | DAT_01c38b78
    MOV EDX,dword ptr [EAX + 0x14]      ; 0046cb70
    MOV dword ptr [0x01c38b7c],EDX      ; 0046cb73 | DAT_01c38b7c
    MOV EDX,dword ptr [EAX + 0x18]      ; 0046cb79
    MOV dword ptr [0x01c38b80],EDX      ; 0046cb7c | DAT_01c38b80
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0046cb82
    MOV dword ptr [0x01c38b84],EDX      ; 0046cb85 | DAT_01c38b84
    MOV EDX,dword ptr [EAX + 0x20]      ; 0046cb8b
    MOV dword ptr [0x01c38b88],EDX      ; 0046cb8e | DAT_01c38b88
    MOV EDX,dword ptr [EAX + 0x24]      ; 0046cb94
    MOV dword ptr [0x01c38b8c],EDX      ; 0046cb97 | DAT_01c38b8c
    MOV EDX,dword ptr [EAX + 0x28]      ; 0046cb9d
    MOV dword ptr [0x01c35e48],EDX      ; 0046cba0 | DAT_01c35e48
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0046cba6
    MOV dword ptr [0x01c35e50],EDX      ; 0046cba9 | DAT_01c35e50
    MOV EDX,dword ptr [EAX + 0x30]      ; 0046cbaf
    MOV dword ptr [0x01c35e4c],EDX      ; 0046cbb2 | DAT_01c35e4c
    MOV EDX,dword ptr [EAX + 0x34]      ; 0046cbb8
    MOV dword ptr [0x01c35e54],EDX      ; 0046cbbb | DAT_01c35e54
    MOV EDX,dword ptr [EAX + 0x38]      ; 0046cbc1
    MOV dword ptr [0x01c38b6c],EDX      ; 0046cbc4 | DAT_01c38b6c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0046cbca
    MOV dword ptr [0x01c38b70],EDX      ; 0046cbcd | DAT_01c38b70
    MOV EDX,dword ptr [EAX + 0x40]      ; 0046cbd3
    MOV dword ptr [0x01c38b74],EDX      ; 0046cbd6 | DAT_01c38b74
    MOV EDX,dword ptr [EAX + 0x44]      ; 0046cbdc
    MOV dword ptr [0x01c38b9c],EDX      ; 0046cbdf | DAT_01c38b9c
    MOV EDX,dword ptr [EAX + 0x48]      ; 0046cbe5
    MOV dword ptr [0x01c38ba0],EDX      ; 0046cbe8 | DAT_01c38ba0
    MOV EDX,dword ptr [EAX + 0x4c]      ; 0046cbee
    MOV dword ptr [0x01c38ba4],EDX      ; 0046cbf1 | DAT_01c38ba4
    MOV EDX,dword ptr [EAX + 0x50]      ; 0046cbf7
    MOV dword ptr [0x01c38ba8],EDX      ; 0046cbfa | DAT_01c38ba8
    MOV EDX,dword ptr [EAX + 0x54]      ; 0046cc00
    MOV dword ptr [0x01c38bac],EDX      ; 0046cc03 | DAT_01c38bac
    MOV EDX,dword ptr [EAX + 0x58]      ; 0046cc09
    MOV dword ptr [0x01c38bb0],EDX      ; 0046cc0c | DAT_01c38bb0
    MOV EDX,dword ptr [EAX + 0x5c]      ; 0046cc12
    MOV dword ptr [0x01c38bb4],EDX      ; 0046cc15 | DAT_01c38bb4
    MOV EDX,dword ptr [EAX + 0x60]      ; 0046cc1b
    MOV dword ptr [0x01c38bb8],EDX      ; 0046cc1e | DAT_01c38bb8
    MOV EDX,dword ptr [EAX + 0x64]      ; 0046cc24
    MOV dword ptr [0x01c38bbc],EDX      ; 0046cc27 | DAT_01c38bbc
    MOV EDX,dword ptr [EAX + 0x68]      ; 0046cc2d
    MOV dword ptr [0x01d04fb8],EDX      ; 0046cc30 | DAT_01d04fb8
    MOV EDX,dword ptr [EAX + 0x6c]      ; 0046cc36
    MOV dword ptr [0x01d04fbc],EDX      ; 0046cc39 | DAT_01d04fbc
    MOV EDX,dword ptr [EAX + 0x70]      ; 0046cc3f
    MOV dword ptr [0x01d04fc0],EDX      ; 0046cc42 | DAT_01d04fc0
    MOV EDX,dword ptr [EAX + 0x74]      ; 0046cc48
    MOV dword ptr [0x01d04fc4],EDX      ; 0046cc4b | DAT_01d04fc4
    MOV EDX,dword ptr [EAX + 0x78]      ; 0046cc51
    MOV dword ptr [0x01d04fc8],EDX      ; 0046cc54 | DAT_01d04fc8
    MOV EDX,dword ptr [EAX + 0x7c]      ; 0046cc5a
    MOV dword ptr [0x01d04fcc],EDX      ; 0046cc5d | DAT_01d04fcc
    MOV EDX,dword ptr [EAX + 0x80]      ; 0046cc63
    MOV dword ptr [0x01d04fd0],EDX      ; 0046cc69 | DAT_01d04fd0
    MOV EDX,dword ptr [EAX + 0x84]      ; 0046cc6f
    MOV dword ptr [0x01d04fd4],EDX      ; 0046cc75 | DAT_01d04fd4
    MOV EDX,dword ptr [EAX + 0x88]      ; 0046cc7b
    MOV EAX,dword ptr [EAX + 0x8c]      ; 0046cc81
    MOV dword ptr [0x01d04fd8],EDX      ; 0046cc87 | DAT_01d04fd8
    MOV [0x006141e4],EAX                ; 0046cc8d | DAT_006141e4
    RET                                 ; 0046cc92

