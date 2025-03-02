# RmppAtom
## Overview�^�T�v
A compact power pack for N-scale railway models operated with a web browser using ATOM Lite.
ATOM Lite���g�p����Web�u���E�U�ő��삷��R���p�N�g��N�Q�[�W�S���͌^�p�p���[�p�b�N�ł��B

![ATOM Lite���g�p�����S���͌^�p�p���[�p�b�N](DSC02939.jpg)

## Features�^����
- It is can run N-scale railway models by operating a web browser on a smartphone or other device.
  �X�}�[�g�t�H������Web�u���E�U�̑���ɂ��AN�Q�[�W�S���͌^�𑖂点�邱�Ƃ��ł��܂��B
- It is designed to be operated exclusively from a web browser, without switches or dials. By utilizing existing hardware products, it is easy to create power pack.
  �X�C�b�`��_�C�������ȗ����AWeb�u���E�U����̑����p�̎d�l�ł��B�����̃n�[�h�E�F�A���i�����p���邱�ƂŁA�p���[�p�b�N��e�ՂɎ��삷�邱�Ƃ��\�ł��B
- Achieves low cost and space saving by using SoC (Espressif Systems : ESP32) compatible with Wi-Fi standard.
  Wi-Fi�K�i�ɑΉ�����SoC(Espressif Systems : ESP32)���̗p���A��R�X�g�E�ȃX�y�[�X�������ł��܂��B
- Even if the SoC operation becomes unstable, safety is ensured by the motor driver IC with built-in overcurrent protection.
  ������SoC�̓��삪�s����ɂȂ��Ă��A�ߓd���ی������������[�^�h���C�oIC�ɂ����S�����m�ۂ��܂��B

## Block Diagram�^�u���b�N�}
![](BlockDiagram_RmppAtom.svg)

## Specification Overview �^ �d�l�T�v
<table>
	<tbody>
	<tr>
	<th colspan="2">Item�^����</th>
	<th>specification�^�d�l</th>
	</tr>
	<tr>
	<td colspan="2">Rated Input Voltage<br>��i���͓d��</td>
	<td>DC12V</td>
	</tr>
	<tr>
	<td colspan="2">Rated Output Current<br>��i�o�͓d��</td>
	<td>1.5A</td>
	</tr>
	<tr>
	<td rowspan="2">Output Control<br>�o�͐���</td>
	<td>Method<br>����</td>
	<td>PWM (Frequency : 19kHz, Resolution : 12bit)</td>
	</tr>
	<tr>
	<td>Polarity<br>�ɐ�</td>
	<td>both directions (forward and reverse)<br>�������i�O�i�^��ށj
	</tr>
	<tr>
	<td colspan="2">Display<br>�\��</td>
	<td>RGB LED</td>
	</tr>
	<tr>
	<td colspan="2">Protections<br>�ی�</td>
	<td>built-in motor driver IC (over current, thermal shutdown)<br>���[�^�h���C�oIC�����i�ߓd���A�ߔM�j</td>
	</tr>
	</tbody>
</table>

## Requirement �^ �K�v�v��
### Hardware �^ �n�[�h�E�F�A
- [ATOM Lite ESP32 IoT Development Kit](https://shop.m5stack.com/products/atom-lite-esp32-development-kit)
- [ATOMIC H-Bridge Driver Base (DRV8876)](https://shop.m5stack.com/products/atomic-h-bridge-driver-base-drv8876)

### Software �^ �\�t�g�E�F�A
#### Framework �^ �t���[�����[�N
- Arduino
#### Development Environment �^ �J����
- VSCode & PlatformIO

## Others �^ ���̑�
Coming soon
�ߓ����J�\��

## License �^ ���C�Z���X
This project is licensed under the MIT License. See the LICENSE.md file for details.
���̃v���W�F�N�g�� MIT ���C�Z���X�̌��Ƀ��C�Z���X����Ă��܂��B �ڍׂ� LICENSE.md ���������������B

## Author
[X(Twitter)](https://x.com/rapid_mifu)