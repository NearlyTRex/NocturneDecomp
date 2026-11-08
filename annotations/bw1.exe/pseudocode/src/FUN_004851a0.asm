; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004851a0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   FUN_0044d700 at 0044d84b
;   FUN_004551a0 at 004551b7
;
; Referenced Globals:
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004851a0
        ;   Label: FUN_004851a0
    MOV EDX,dword ptr [0x01c4eff8]      ; 004851a4 | DAT_01c4eff8
    MOV dword ptr [EAX],EDX             ; 004851aa
    MOV EDX,dword ptr [0x01c4effc]      ; 004851ac | DAT_01c4effc
    MOV dword ptr [EAX + 0x4],EDX       ; 004851b2
    MOV EDX,dword ptr [0x01c4f000]      ; 004851b5 | DAT_01c4f000
    MOV dword ptr [EAX + 0x8],EDX       ; 004851bb
    MOV EDX,dword ptr [0x01c4f004]      ; 004851be | DAT_01c4f004
    MOV dword ptr [EAX + 0xc],EDX       ; 004851c4
    MOV EDX,dword ptr [0x01c51d38]      ; 004851c7 | DAT_01c51d38
    MOV dword ptr [EAX + 0x10],EDX      ; 004851cd
    MOV EDX,dword ptr [0x01c51d3c]      ; 004851d0 | DAT_01c51d3c
    MOV dword ptr [EAX + 0x14],EDX      ; 004851d6
    MOV EDX,dword ptr [0x01c51d40]      ; 004851d9 | DAT_01c51d40
    MOV dword ptr [EAX + 0x18],EDX      ; 004851df
    MOV EDX,dword ptr [0x01c51d44]      ; 004851e2 | DAT_01c51d44
    MOV dword ptr [EAX + 0x1c],EDX      ; 004851e8
    MOV EDX,dword ptr [0x01c51d48]      ; 004851eb | DAT_01c51d48
    MOV dword ptr [EAX + 0x20],EDX      ; 004851f1
    MOV EDX,dword ptr [0x01c51d4c]      ; 004851f4 | DAT_01c51d4c
    MOV dword ptr [EAX + 0x24],EDX      ; 004851fa
    MOV EDX,dword ptr [0x01c4f008]      ; 004851fd | DAT_01c4f008
    MOV dword ptr [EAX + 0x28],EDX      ; 00485203
    MOV EDX,dword ptr [0x01c4f010]      ; 00485206 | DAT_01c4f010
    MOV dword ptr [EAX + 0x2c],EDX      ; 0048520c
    MOV EDX,dword ptr [0x01c4f00c]      ; 0048520f | DAT_01c4f00c
    MOV dword ptr [EAX + 0x30],EDX      ; 00485215
    MOV EDX,dword ptr [0x01c4f014]      ; 00485218 | DAT_01c4f014
    MOV dword ptr [EAX + 0x34],EDX      ; 0048521e
    MOV EDX,dword ptr [0x01c51d2c]      ; 00485221 | DAT_01c51d2c
    MOV dword ptr [EAX + 0x38],EDX      ; 00485227
    MOV EDX,dword ptr [0x01c51d30]      ; 0048522a | DAT_01c51d30
    MOV dword ptr [EAX + 0x3c],EDX      ; 00485230
    MOV EDX,dword ptr [0x01c51d34]      ; 00485233 | DAT_01c51d34
    MOV dword ptr [EAX + 0x40],EDX      ; 00485239
    MOV EDX,dword ptr [0x01c51d5c]      ; 0048523c | DAT_01c51d5c
    MOV dword ptr [EAX + 0x44],EDX      ; 00485242
    MOV EDX,dword ptr [0x01c51d60]      ; 00485245 | DAT_01c51d60
    MOV dword ptr [EAX + 0x48],EDX      ; 0048524b
    MOV EDX,dword ptr [0x01c51d64]      ; 0048524e | DAT_01c51d64
    MOV dword ptr [EAX + 0x4c],EDX      ; 00485254
    MOV EDX,dword ptr [0x01c51d68]      ; 00485257 | DAT_01c51d68
    MOV dword ptr [EAX + 0x50],EDX      ; 0048525d
    MOV EDX,dword ptr [0x01c51d6c]      ; 00485260 | DAT_01c51d6c
    MOV dword ptr [EAX + 0x54],EDX      ; 00485266
    MOV EDX,dword ptr [0x01c51d70]      ; 00485269 | DAT_01c51d70
    MOV dword ptr [EAX + 0x58],EDX      ; 0048526f
    MOV EDX,dword ptr [0x01c51d74]      ; 00485272 | DAT_01c51d74
    MOV dword ptr [EAX + 0x5c],EDX      ; 00485278
    MOV EDX,dword ptr [0x01c51d78]      ; 0048527b | DAT_01c51d78
    MOV dword ptr [EAX + 0x60],EDX      ; 00485281
    MOV EDX,dword ptr [0x01c51d7c]      ; 00485284 | DAT_01c51d7c
    MOV dword ptr [EAX + 0x64],EDX      ; 0048528a
    MOV EDX,dword ptr [0x01d1dd18]      ; 0048528d | DAT_01d1dd18
    MOV dword ptr [EAX + 0x68],EDX      ; 00485293
    MOV EDX,dword ptr [0x01d1dd1c]      ; 00485296 | DAT_01d1dd1c
    MOV dword ptr [EAX + 0x6c],EDX      ; 0048529c
    MOV EDX,dword ptr [0x01d1dd20]      ; 0048529f | DAT_01d1dd20
    MOV dword ptr [EAX + 0x70],EDX      ; 004852a5
    MOV EDX,dword ptr [0x01d1dd24]      ; 004852a8 | DAT_01d1dd24
    MOV dword ptr [EAX + 0x74],EDX      ; 004852ae
    MOV EDX,dword ptr [0x01d1dd28]      ; 004852b1 | DAT_01d1dd28
    MOV dword ptr [EAX + 0x78],EDX      ; 004852b7
    MOV EDX,dword ptr [0x01d1dd2c]      ; 004852ba | DAT_01d1dd2c
    MOV dword ptr [EAX + 0x7c],EDX      ; 004852c0
    MOV EDX,dword ptr [0x01d1dd30]      ; 004852c3 | DAT_01d1dd30
    MOV dword ptr [EAX + 0x80],EDX      ; 004852c9
    MOV EDX,dword ptr [0x01d1dd34]      ; 004852cf | DAT_01d1dd34
    MOV dword ptr [EAX + 0x84],EDX      ; 004852d5
    MOV EDX,dword ptr [0x01d1dd38]      ; 004852db | DAT_01d1dd38
    MOV dword ptr [EAX + 0x88],EDX      ; 004852e1
    MOV EDX,dword ptr [0x0061b4c4]      ; 004852e7 | DAT_0061b4c4
    MOV dword ptr [EAX + 0x8c],EDX      ; 004852ed
    RET                                 ; 004852f3

