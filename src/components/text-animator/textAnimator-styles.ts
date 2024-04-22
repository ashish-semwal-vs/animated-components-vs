import { StyleSheet, type ViewStyle } from 'react-native';

interface Styles {
  container: ViewStyle;
}

const styles = StyleSheet.create<Styles>({
  container: {
    overflow: 'hidden',
  },
});

export default styles;
